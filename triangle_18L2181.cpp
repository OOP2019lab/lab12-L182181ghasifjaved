#include"triangle_18L2181.h"
#include"Shape_18L2181.h"
#include"circle_18L2181.h"
#include"rectangle_18L2181.h"
triangle::~triangle(){}
triangle::triangle(float h,float b,string c):shape(c)
{
	type="triangle";
	height=h;
	base=b;
}
float triangle::area()
{
	float area=0.5*base*height;
	return area;
}