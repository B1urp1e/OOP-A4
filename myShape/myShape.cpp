/*
*File           : myShape.cpp
*				: for use with shape project
*Project        : Shape
*Programmer     : Colby Taylor
*First version  : 2021-03-15
*Description    : Create circle and square classes that inherit from Shape class
*/


//Header Files
#include"Shape.h"
#include"Square.h"
#include"Circle.h"

#include <stdio.h>
#include <stdlib.h>
#include <new.h>

// local function prototypes
float	getFloat(void);
int		getString(char* myString);

int main(void)
{
	Circle* circle = NULL;
	Square* square = NULL;
	char incomingCircleColour[MAX_COLOUR_SIZE + 1] = "";
	char incomingSquareColour[MAX_COLOUR_SIZE + 1] = "";
	float incomingRadius = NULL;
	float incomingLength = NULL;
	int tester = 0;


	printf("For a circle, please enter the colour: ");
	getString(incomingCircleColour);

	printf("Please enter the radius of the circle: ");
	incomingRadius = getFloat();

	printf("For a square, please enter the colour: ");
	getString(incomingSquareColour);

	printf("Please enter the side length of the square: ");
	incomingLength = getFloat();

	circle = new Circle(incomingCircleColour, incomingRadius);
	if (circle == NULL)
	{
		printf("Not enough memory");
		return 1;
	}
	square = new Square(incomingSquareColour, incomingLength);
	if (square == NULL)
	{
		printf("Not enough memory");
		return 1;
	}

	circle->Show();
	square->Show();

	delete circle;
	delete square;
	return 0;
}


/*
	Name	: getFloat
			: Created By Sean Clarke. 
			: Retrieved from eConestoga SampleMain.zip on 2021-03-20
	Purpose : validate and return the value float value. 
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	float value
			:	float -1.00 if failure
*/

float getFloat(void)
{
	char	record[MAX_NAME_SIZE] = { 0 };	
	float 	number = 0.00;

	fgets(record, sizeof(record), stdin);

	/*  sscanf() returns a number corresponding with the number of items copied  */
	if (sscanf(record, "%f", &number) != 1)
	{
		/* if entered value is unrecognizable */
		number = -1.00;
	}

	return number;
}


/*
	Name	: getString
			: Created By Sean Clarke.
			: Retrieved from eConestoga SampleMain.zip on 2021-03-20
	Purpose : validate and set string to pointer address.
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	int 0 if success
			:	int -1 if failure
*/
int getString(char* myString)
{
	char	record[MAX_NAME_SIZE] = { 0 };	
	int		success = 0;		

	fgets(record, sizeof(record), stdin);

	/*  sscanf() returns a number how many strings were copied */
	if (sscanf(record, "%s", myString) != 1)
	{
		/* if entered value is unrecognizable */
		success = -1;
	}

	return success;
}