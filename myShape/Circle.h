#pragma once
#include "Shape.h"
/*
   -------------------------------------------------------------
	NAME	:	Circle
	PURPOSE :	This class is used to track Circle shape by
				publicly inheriting Shape. This class has it's
				own radius attribute.
   -------------------------------------------------------------
*/
class Circle :public Shape
{
private:
	float radius;									// radius of the circle

public:
	Circle();										// Constructor
	Circle(char* myColour, float myRadius);			// Constructor

	int SetRadius(float myRadius);					// radius mutator
	float GetRadius(void);							// radius accessor

	void Show(void);								// attributes print method

	virtual float Perimeter(void);					// virtual method for perimeter
	virtual float Area(void);						// virtual method for area
	virtual float OverallDimension(void);			// virtual method for dimension

	virtual ~Circle();								// Destructor
};
