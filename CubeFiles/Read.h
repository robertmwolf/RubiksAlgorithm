//
//  main.cpp
//  CubeOpoen
//
//  Created by Robert Wolf on 4/7/19 for TCSS Rubik's cube collaboration.
//  Edited by Jacob Dickson for TCSS Rubik's cube collaboration.
//  Code is original and not reused from any other project / repository.
//
//  Starter code to read in a txt file representing the state of a rubik's cube.
//  This code will read in a text file with a string that is 54 characters long.
//  It strips out all non-alphabetical characters, converts the remaining characters to
//  lower case, and arranges them in 6 character arrays. It places those arrays into a
//  string array of length 6 in order of ROYGBW
//
//  Still need to modularize this code (place in function). I suggest creating the list
//  of strings outside this function and passing in a pointer to the list. This would allow
//  this code block to execute outside of main.
//
//  NOTES:
//  A side of the cube is defined by color by its center pice.
//  The sides of the cube are in order Red Orange Yellow Green Blue White.
//  A given side's colored faces are read in from top to bottom, left to right.
//  example:    R W R
//              O G G
//              B Y R
// The red side is defined as the "top" of the cube. The Red side's "top" is defined
// as the edge adjacent to the yellow side. The Orange side's "top" is defined as the
// edge facing the yellow side.
//
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Jacob: I canged this to a fuction read in as a header file.
int readCube(char redFace[], char orangeFace[], char yellowFace[],
	         char greenFace[], char blueFace[], char whiteFace[]) {

	string faceList[6];
	//Took out local arrays as they are passed in now.
	string inputLine;
	string cubeString;
	//This is openeing from a directory.
	ifstream myfile("Cube.txt");

	if (myfile.is_open()) { 	
		bool isValid = true;
		getline(myfile, inputLine);
		//TODO Delete. This is printing to show input
		cout << inputLine << '\n';
		int i = 0;
		while (inputLine[i]) {
			//Convert to lower case.
			char current = tolower(inputLine[i]);
			//Checking for valid input. Does not guarentee roygbw, just that it's ascii in the alphabet
			if (current > 96 && current < 123) {
				cubeString += current;
			}
			i++;
		}
		
		if (cubeString.length() != 9 * 6) {
			// Not a valid cube
			isValid = false;
			// ESCAPE PROGRAM SOMEHOW, do not continue!! will result in errors!!
		}

		// Iterate through input string and store them in arrays

		// Allows me to iterate through the entire input
		int strPoint = 0;

		// The number face I am on to store them in the face listing
		int faceNumber = 0;

		//Store red face and add it to the list
		for (int i = 0; i < 9; i++) {
			redFace[i] = cubeString[strPoint];
			strPoint++;
		}
		faceList[faceNumber] = redFace;
		faceNumber++;

		//Store orange face
		for (int i = 0; i < 9; i++) {
			orangeFace[i] = cubeString[strPoint];
			strPoint++;
		}
		faceList[faceNumber] = orangeFace;
		faceNumber++;

		for (int i = 0; i < 9; i++) {
			yellowFace[i] = cubeString[strPoint];
			strPoint++;
		}
		faceList[faceNumber] = yellowFace;
		faceNumber++;

		for (int i = 0; i < 9; i++) {
			greenFace[i] = cubeString[strPoint];
			strPoint++;
		}
		faceList[faceNumber] = greenFace;
		faceNumber++;

		for (int i = 0; i < 9; i++) {
			blueFace[i] = cubeString[strPoint];
			strPoint++;
		}
		faceList[faceNumber] = blueFace;
		faceNumber++;

		for (int i = 0; i < 9; i++) {
			whiteFace[i] = cubeString[strPoint];
			strPoint++;
		}
		faceList[faceNumber] = whiteFace;
		faceNumber++;

		myfile.close();
	}
	// Was unable to read file
	else cout << "Unable to open file\n";

	return 0;
}



