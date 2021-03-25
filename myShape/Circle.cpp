#include "Circle.h"

/*
	Name	: Circle -- CONSTRUCTOR
	Purpose : to instantiate a new Circle object with default values
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	Nothing
*/
Circle::Circle()
{
	radius = 0.0;
}

/*
	Name	: Circle -- CONSTRUCTOR
	Purpose : to instantiate a new Circle object - given a set of attribute values
			  Also updates the Shape's colour and name
	Inputs	:	myColour	String		colour of the circle
				myRadius	float		radius of the circle
	Outputs	:	NONE
	Returns	:	Nothing
*/
Circle::Circle(char* myColour, float myRadius) :Shape((char*)"Circle", myColour)
{
	if (myRadius < 0.0)
	{
		radius = 0.0;
	}
	else
	{
		radius = myRadius;
	}
}

/*
	Name	: Circle -- Destructor
	Purpose : to destroy Circle object
	Inputs	:	NONE
	Outputs	:	Custom message to the screen
	Returns	:	Nothing
*/
Circle::~Circle()
{
	printf("The circle is broken ...\n");
}

/*
	Name	: SetRadius
	Purpose : this method sets the radius as per validation logic
	Inputs	:	myRadius float
	Outputs	:	NONE
	Returns	:	status int
*/
int Circle::SetRadius(float myRadius)
{
	if (myRadius < 0.0)
	{
		return 0;
	}
	else
	{
		radius = myRadius;
		return 1;
	}
}

/*
	Name	: GetRadius
	Purpose : this method returns the radius of the circle
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	radius float
*/
float Circle::GetRadius(void)
{
	return radius;
}

/*
	Name	: Show
	Purpose : this method is to be called in order to take a snapshot of the
			  current attribute values of circle
	Inputs	:	NONE
	Outputs	:	attribute values are dumped to the screen
	Returns	:	Nothing
*/
void Circle::Show(void)
{
	char myName[MAX_NAME_SIZE + 1] = { 0 };
	GetName(myName);
	char myColour[MAX_COLOUR_SIZE + 1] = { 0 };
	GetColour(myColour);

	printf("\nShape Information\n");
	printf("Name            : %s\n", myName);
	printf("Colour          : %s\n", myColour);
	printf("Radius          : %0.2f cm\n", radius);
	printf("Circumference   : %0.2f cm\n", Perimeter());
	printf("Area            : %0.2f square cm\n\n", Area());
}

/*
	Name	: Perimeter
	Purpose : this method returns the Perimeter of the circle
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	2*pi*radius float
*/
float Circle::Perimeter(void)
{
	return 2 * PI_VALUE * radius;
}

/*
	Name	: Area
	Purpose : this method returns the Area of the circle
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	pi*radius*radius float
*/
float Circle::Area(void)
{
	return PI_VALUE * radius * radius;
}

/*
	Name	: OverallDimension
	Purpose : this method returns the Area of the circle
	Inputs	:	NONE
	Outputs	:	NONE
	Returns	:	2*radius float
*/
float Circle::OverallDimension(void)
{
	return 2 * radius;
}