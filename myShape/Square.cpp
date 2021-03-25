#include "Square.h"

/*
	Name	: Square -- Constructor
	Purpose : instantiate square object
	Inputs	:	char* myColour, float newSideLength
	Outputs	:	NONE
	Returns	:	NONE
*/
Square::Square(char *myColour, float newSideLength) :Shape((char*)"Square", myColour)
{
	if (newSideLength < 0.00)
	{
		sideLength = 0.00;
	}
	else
	{
		sideLength = newSideLength;
	}
}

/*
	Name	: Square -- Constructor
	Purpose : instantiate square object
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	NONE
*/
Square::Square(void) 
{
	sideLength = 0.00;
}

/*
	Name	: ~Square -- Destructor
	Purpose : destroy square object 
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	NONE
*/
Square::~Square(void)
{
	printf("The square is squished ...");
}

/*
	Name	: SetSideLength 
	Purpose : set side length of square object 
	Inputs	:	float newSideLength
	Outputs	:	NONE
	Returns	:	bool false - if setting the value fails 
			:	bool true - if setting the value succeeds
*/
bool Square::SetSideLength(float newSideLength)
{
	bool success = false;
	if (newSideLength >= 0.00)
	{
		sideLength = newSideLength;
		success = true;
	}
	return success;
}

/*
	Name	: GetSideLength
	Purpose : return the side Length
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	float side length
*/
float Square::GetSideLength(void)
{
	return sideLength;
}

/*
	Name	: Perimeter
	Purpose : return the perimeter of the square
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	float - 4x sideLength
*/
float Square::Perimeter(void)
{
	return 4 * sideLength;
}

/*
	Name	: Area
	Purpose : return the area of the square
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	float - sideLength^2
*/
float Square::Area(void)
{
	return sideLength * sideLength;
}

/*
	Name	: OverallDimension
	Purpose : return the side length of the square
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	float - side length
*/
float Square::OverallDimension(void)
{
	return sideLength;
}

/*
	Name	: Show
	Purpose : show square objects properties 
	Inputs	:	NONE
	Outputs	:	attribute values are dumped neatly to the screen
	Returns	:	NONE
*/
void Square::Show(void)	
{
	char myName[MAX_NAME_SIZE + 1] = { 0 };
	GetName(myName);
	char myColour[MAX_COLOUR_SIZE + 1] = { 0 };
	GetColour(myColour);

	printf("\nShape Information\n");
	printf("Name            : %s\n", myName);
	printf("Colour          : %s\n", myColour);
	printf("Side-Length     : %0.2f cm\n", OverallDimension());
	printf("Perimeter	: %0.2f cm\n", Perimeter());
	printf("Area            : %0.2f square cm\n\n", Area());
}