#include"triangle_18L2181.h"
#include"Shape_18L2181.h"
#include"circle_18L2181.h"
#include"rectangle_18L2181.h"
circle::circle(float r,string c):shape(c)
{
	type="circle";
	radius=r;
}
circle::~circle(){}
float circle::area()
{
	float area=3.14*radius*radius;
	return area;
}