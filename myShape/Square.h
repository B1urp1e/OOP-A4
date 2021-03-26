/*
*File           : Square.h
*				: for use shape project
*Project        : Shape
*Programmer     : Colby Taylor
*First version  : 2021-03-15
*Description    : Create circle and square classes that inherit from Shape class
*/

#pragma once
#include "Shape.h"
/*
   -------------------------------------------------------------
	NAME	:	Square
	PROJECT :	Shape
	PURPOSE :	This class is used to track Square shape by
				publicly inheriting Shape. This class has it's
				own side length attribute.
   -------------------------------------------------------------
*/
class Square: public Shape
{
private:
	float sideLength;


public:
	
	Square(char* newColour, float newSideLength);	//constructor
	Square(void);									//default constructor set side length to 0.00
	
	virtual ~Square(void);							//destructor "square is squished"
	
	float GetSideLength(void);						//side-length accessor
	bool SetSideLength(float newSideLength);		//side-length mutator

	void Show(void);								// method Show(void) dump attributes to screen
	virtual float Perimeter(void);					// pure virtual method for perimeter
	virtual float Area(void);						// pure virtual method for area
	virtual float OverallDimension(void);			// pure virtual method for overall dimension
};
