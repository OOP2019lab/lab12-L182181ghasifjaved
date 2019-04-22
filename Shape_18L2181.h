#include<iostream>
#include<string>
using namespace std;
#pragma once
class shape
{
protected:
	string type;
public:

	shape(string c);
	virtual ~shape();
	virtual float area();
	string color;
};