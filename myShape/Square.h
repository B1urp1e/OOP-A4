#pragma once
#include "Shape.h"
/*
   -------------------------------------------------------------
	NAME	:	Square
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
	
	~Square(void);									//destructor "square is squished"
	
	float GetSideLength(void);						//side-length accessor
	bool SetSideLength(float newSideLength);		//side-length mutator

	void Show(void);								// method Show(void) dump attributes to screen
	float Perimeter(void);							// method calculate permiter
	float Area(void);								// method calculate area
	float OverallDimension(void);					// method OverallDimension(void) return overall dimension 
};
