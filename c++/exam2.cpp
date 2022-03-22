#include <iostream>
#define PI 3.14159
using namespace std;

class Circle
{
	private:
	float radius;
	float perimeter;
	float area;
	public:
	Circle(float);
	Circle(Circle &one_circle);
	~Circle();
	void SetRadius(float);
	void PerimeterAera();
 	void print();
};

Circle::Circle(float r)
{
	radius=r;
	perimeter=r*PI;
	area=r*r*PI;
}

Circle::Circle(Circle &one_circle)
{
	radius=one_circle.radius;
	perimeter=one_circle.perimeter;
	area=one_circle.area;
}

Circle::~Circle()
{
}

void Circle::SetRadius(float r)
{
	radius=r;
}

void Circle::PerimeterAera()
{
	perimeter=radius*PI;
	area=radius*radius*PI;
}
void Circle::print()
{
cout<<"半径:"<<radius<<"周长:"<<perimeter<<"面积:"<<area<<endl;
}

int main()
{
	Circle c1(3.0);
	Circle c2=c1;
	c1.print();
	c2.print();
	c2.SetRadius(4.0);
	c2.PerimeterAera();
	c2.print();
	return 0;
}
