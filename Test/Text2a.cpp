#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

class Rectangle{
  int left, top, right, bottom;
 public:
  Rectangle( int = 0, int = 0, int = 0, int = 0 );
  Rectangle( Rectangle &cc );
  ~Rectangle(){};
  void Assign( int, int, int, int );
  void SetLeft( int t ){ left = t; }
  void SetRight( int t ){ right = t; }
  void SetTop( int t ){ top = t; }
  void SetBottom( int t ){ bottom=t; }
  void Show();
  int get_area();
};

Rectangle::Rectangle( int l, int t, int r, int b ){
  left = l; top = t; right = r; bottom = b;
}

Rectangle::Rectangle( Rectangle &cc ){
  left = cc.left;
  top = cc.top;
  right = cc.right;
  bottom = cc.bottom;
}

void Rectangle::Assign( int l, int t, int r, int b ){
  left = l; top = t; right = r; bottom = b;
}

void Rectangle::Show(){
  cout << "left-top point is(" << left << "," << top << ")" << '\n';

  cout << "right-bottom point is("
       << right
	   << ","
	   << bottom
	   << ")"
	   << '\n';
}

int Rectangle::get_area(){
  return abs( right - left ) * abs( top - bottom );
}

int main(){
  Rectangle rect;
  rect.Show();
  rect.Assign(100,200,300,400);
  rect.Show();
  Rectangle rect1(0,0,200,200);
  rect1.Show();
  Rectangle rect2(rect1);
  rect2.Show();
  cout << "area of object rect2 is" << rect2.get_area() << endl;
return 0; }
