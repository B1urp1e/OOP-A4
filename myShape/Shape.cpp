#include "Shape.h"

/*
	Name	: Shape -- CONSTRUCTOR
	Purpose : to instantiate a new Shape object with default values
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	Nothing
*/
Shape::Shape()
{
	strcpy(name, "Unknown");
	strcpy(colour, "undefined");
}

/*
	Name	: Shape -- CONSTRUCTOR
	Purpose : to instantiate a new Shape object - given a set of attribute values
	Inputs	:	myName	String		name of the shape
				myColour	String			colour of the shape
	Outputs	:	NONE
	Returns	:	Nothing
*/
Shape::Shape(char* myName, char* myColour)
{
	if (strlen(myName) > 50)
	{
		strcpy(name, "Unknown");
	}
	else
	{
		if ((strcmp(myName, "Circle") == 0) || (strcmp(myName, "Square") == 0))
		{
			strcpy(name, myName);
		}
		else
		{
			strcpy(name, "Unknown");
		}
	}

	if (strlen(myColour) > 10)
	{
		strcpy(colour, "undefined");
	}
	else
	{
		if ((strcmp(myColour, "red") == 0) || (strcmp(myColour, "green") == 0)
			|| (strcmp(myColour, "blue") == 0) || (strcmp(myColour, "yellow") == 0)
			|| (strcmp(myColour, "purple") == 0) || (strcmp(myColour, "pink") == 0)
			|| (strcmp(myColour, "orange") == 0))
		{
			strcpy(colour, myColour);
		}
		else
		{
			strcpy(colour, "undefined");
		}
	}
}

/*
	Name	: GetName
	Purpose : this method returns the name of the shape
			  by copying into a separate string variable
	Inputs	:	myName string
	Outputs	:	NONE
	Returns	:	NONE
*/
void Shape::GetName(char* myName)
{
	memcpy(myName, name, sizeof(name));
}

/*
	Name	: GetColour
	Purpose : this method returns the colour of the shape
			  by copying into a separate string variable
	Inputs	:	myColour string
	Outputs	:	NONE
	Returns	:	NONE
*/
void Shape::GetColour(char* myColour)
{
	memcpy(myColour, colour, sizeof(colour));
}

/*
	Name	: SetName
	Purpose : this method sets the name of the shape
			  and returns the status
	Inputs	:	myName string
	Outputs	:	NONE
	Returns	:	status int
*/
int Shape::SetName(char* myName)
{
	if (strlen(myName) > 50)
	{
		return 0;
	}
	else
	{
		if ((strcmp(myName, "Circle") == 0) || (strcmp(myName, "Square") == 0))
		{
			strcpy(name, myName);
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

/*
	Name	: SetColour
	Purpose : this method sets the name of the shape
			  and returns the status
	Inputs	:	myColour string
	Outputs	:	NONE
	Returns	:	status int
*/
int Shape::SetColour(char* myColour)
{
	if (strlen(myColour) > 10)
	{
		return 0;
	}
	else
	{
		if ((strcmp(myColour, "red") == 0) || (strcmp(myColour, "green") == 0)
			|| (strcmp(myColour, "blue") == 0) || (strcmp(myColour, "yellow") == 0)
			|| (strcmp(myColour, "purple") == 0) || (strcmp(myColour, "pink") == 0)
			|| (strcmp(myColour, "orange") == 0))
		{
			strcpy(colour, myColour);
			return 1;
		}
		else
		{
			return 0;
		}
	}
}