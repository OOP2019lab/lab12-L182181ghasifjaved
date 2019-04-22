#include"triangle_18L2181.h"
#include"Shape_18L2181.h"
#include"circle_18L2181.h"
#include"rectangle_18L2181.h"
#include<conio.h>
float sumArea(shape *Shape1,shape *Shape2);
int main()
{
	/*triangle t1(1.0,9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	shape s1("Purple");
	shape *st1=&t1;
	shape *sc1=&c1;
	shape *ss1=&s1;
	shape *sr1=&r1;
 
	cout<<sumArea(st1,sc1)<<endl;
	cout<<sumArea(ss1,sr1)<<endl;
	cout<<sumArea(ss1,st1)<<endl;*/
	int count= 5;
shape **s=new shape*[count];
for(int i=0; i<count;)
{
  	cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
	string color;
  	switch (getch())
  	{
        	case '1':
				float h,b;
              	cout<<"enter height";
				cin>>h;
              	cout<<"enter base";
				cin>>b;
				cout<<"enter color";
				cin>>color;
              	s[i]=new triangle(h,b,color);
				cout<<s[i]->area();
                                	i++;
              	break;
        	case '2':
              	float l,w;
              	cout<<"enter height";
				cin>>l;
              	cout<<"enter width";
				cin>>w;
				cout<<"enter color";
				cin>>color;
              	s[i]=new rectangle(l,w,color);
				cout<<s[i]->area();
                                	i++;
              	break;
 
        	case '3':
				float r;
              	cout<<"enter radius";
				cin>>r;
				cout<<"enter color";
				cin>>color;
              	s[i]=new circle(r,color);
                cout<<s[i]->area();                	
				i++;
              	break;
 
   	 	default:
              	cout<<"Invalid inpu2t. Enter again." <<endl<<endl;
              	break;
}
	for (int i = 0; i < count; i++)
	{
		if (s[i] != nullptr)
			cout << s[i]->area() << endl;
	}
	//delete all object you have create using new.    
	for (int i = 0; i < count; i++)
	{
		if(s[i] != nullptr)
			delete s[i];
	}
	delete[]s;
	shape *s2 = new triangle(1.0, 9.0, "Red");// constructor of triangle invoked
	delete s2; //identify which destructor in invoked
	system ("pause");
}
}
float sumArea(shape *Shape1,shape *Shape2)
{
	float area=Shape1->area()+Shape2->area();
	return area;
}
 
