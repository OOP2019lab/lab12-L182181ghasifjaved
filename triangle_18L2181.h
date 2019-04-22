#include"Shape_18L2181.h"
class triangle: public shape
{
	float height;
	float base;
public:
	virtual float area();
	triangle(float h,float b,string c);
	~triangle();
};