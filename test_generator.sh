#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NO_COLOR='\033[0m'

run_test()
{
    let "a = 0"

    #test loop
    for i in `seq 1 100`;
    do
	./generator/generator 100 100 perfect > map.txt
	./solver/solver map.txt > result.txt
	if [ $? -eq 0 ]
	then
	    let "a = a + 1"
     	fi
    done
    if [[ "$a" -ge 75 ]]
    then
	echo -e "Vous passez ${GREEN}${a}%${NO_COLOR} des tests."
    else
	echo -e "Vous passez ${RED}${a}%${NO_COLOR} des tests."
    fi
    rm map.txt
    rm result.txt
}

echo "Start test_generator.sh"
run_test
echo "End test_generator.sh"
