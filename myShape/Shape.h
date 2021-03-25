#pragma once

#include<stdio.h>
#include<string.h>
#include<new.h>

#pragma warning(disable: 4996)

#define MAX_NAME_SIZE 50
#define MAX_COLOUR_SIZE 10
#define PI_VALUE 3.1415926

/*
   -------------------------------------------------------------
	NAME	:	Shape
	PURPOSE :	This class is used to track what different shapes
				are created and it name and colour attributes.
   -------------------------------------------------------------
*/

class Shape
{
private:
	char name[MAX_NAME_SIZE + 1];					// name of the shape
	char colour[MAX_COLOUR_SIZE + 1];				// colour of the shape

public:
	Shape();										// Constructor
	Shape(char* myName, char* myColour);			// Constructor

	void GetName(char* myName);						// name accessor
	void GetColour(char* myColour);					// colour accessor

	int SetName(char* myName);						// name mutator
	int SetColour(char* myColour);					// colour mutator

	virtual float Perimeter(void) = 0;				// pure virtual method for perimeter
	virtual float Area(void) = 0;					// pure virtual method for area
	virtual float OverallDimension(void) = 0;		// pure virtual method for dimension
};