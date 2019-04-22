#include"Shape_18L2181.h"
class circle: public shape
{
	float radius;
public:
	circle(float r,string c);
	~circle();
	virtual float area();
};