# RubiksAlgorithm

## Fork - Robert Wolf

## Student Project - University of Washington Tacoma

### Purpose: Build a Machine to Solve a Rubik's Cube 

### See original repository for full credits.
This repository has been forked for the purpose of modifications by Robert Wolf to not effect main repository. 

The Folder CubeFiles contains the current version of the project. 

The Main function is contained in Cube.cpp. It takes input from a text file, Cube.txt
A diagram for how the cube is represented in this text file is included for reference. 

A quick video on the project:
https://youtu.be/fBi1skfaGGA


### Future Plans:
Instead of a linear solving algorithm, we would like to implement an AI to solve the cube. The linear algorithm we are using often generates a move list in the 100’s, and this is extremely inefficient as the upper bound on number of moves to solve any cube is 26 quarter turns. This likely will mean a modified A-Star tree search, but there are several problems which will need to be solved in order to realize this:

Problem 1: This will be difficult to implement in C++. While it is possible to work through this development process, I would like to migrate this program over to Python. I believe the Raspberry Pi will have the resources we need, and we will not need to optimize this project in C++. This will require mapping the input and serial port output of this program to a new Python project. 

Problem 2: Search space for a brute force tree search is computationally infeasible. There exists 43,252,003,274,489,856,000 possible states for the cube. A means of narrowing the search space will need to be used. Even a A-Star search using a Manhattan distance heuristic will likely yield to large of a search space. Possible solution: using a “known solvable state” database lookup table to build up solutions offline, so we need only to get it to a previously solved state with A-Star. 

#### Computer Vision Integration:
We plan to integrate CV into this project in the future. We started on it initially, but were unable to progress quickly enough to integrate it before the end of the academic year. 
