#include"Shape_18L2181.h"
class rectangle: public shape
{
	float height;
	float width;
public:
	virtual float area();
	rectangle(float h,float w,string c);
	~rectangle();
};