# Maze Generator and Solver

An epitech project realised in 1 week in 2019

Project realised in C.

Link to the video demonstration : https://www.youtube.com/watch?v=WJH2pJweOlQ

## Presentation

Creation of two programs : generator and solver

The generator create maze of differents sizes and they can be perfect or not.

The solver just solve the map return by the generator.

The 'X' are the walls. The '*' are free spaces. The 'o' represent the maze solution

You can find the subject at ./subject/

## Prerequisites

+ A Unix environment

## How to compile the project

You just have to run 'make' command at the root of the project.

## How to launch the project

To launch the generator : `./generator/generator x y [perfect]`

To save in file the maze generated : `./generator/generator x y [perfect] > filepath`

To lauch the solver : `./solver/solver filepath`
