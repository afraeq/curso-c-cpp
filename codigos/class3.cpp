// example: class constructor

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle (int,int);
    int area () {return (width*height);}
};

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {

  Rectangle rect1 (3,4);
  Rectangle rect2 (5,8);

  cout << "area 1: " << rect1.area() << endl;
  cout << "area 2: " << rect2.area() << endl;
  return 0;
}
