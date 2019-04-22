#include"triangle_18L2181.h"
#include"Shape_18L2181.h"
#include"circle_18L2181.h"
#include"rectangle_18L2181.h"
rectangle::rectangle(float h,float w,string c): shape(c)
{
	type="rectangle";
	height=h;
	width=w;
}
rectangle::~rectangle(){}
float rectangle::area()
{
	float area=height*width;
	return area;
}