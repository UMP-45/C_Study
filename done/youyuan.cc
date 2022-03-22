#include <iostream>
#define PI 3.14159
using namespace std;

class Circle{
  float radius;
  float perimeter;
  float area;
public:
  Circle(float);
  Circle(Circle &one_circle);
  ~Circle();
  void SetRadius(float);
  void PerimeterArea();
  void print();
  friend float GetPerimeter(Circle &a);
  friend float GetArea(Circle &a);
};

Circle :: Circle(float r){
  radius = r;perimeter = r*PI;area = r*r*PI;
}
Circle :: Circle(Circle & one_circle){
  radius=one_circle.radius;
  perimeter=one_circle.perimeter;
  area=one_circle.area;
}
Circle :: ~Circle(){}

  void Circle :: SetRadius(float r){
  radius = r;
}
  void Circle :: PerimeterArea(){
  perimeter = radius*PI;area = radius*radius*PI;
}
void Circle :: print(){
  cout << "半径: " << radius << "周长: " << perimeter << "面积: " << area << endl;
}
float GetPerimeter(Circle &a){
  return a.perimeter;
}
float GetArea(Circle &a){
  return a.area;
}

int main(){
  Circle c1(3.0);
  Circle c2 = c1;
  c1.print();
  c2.print();
  c2.SetRadius(4.0);
  c2.PerimeterArea();
  c2.print();
  cout << "使用友元函数输出c1,c2" << endl;
  cout << "c1: " << GetPerimeter(c1) << "and" << GetArea(c1) << endl;
  cout << "c2: " << GetPerimeter(c2) << "and" << GetArea(c2) << endl;
  return 0;
}
