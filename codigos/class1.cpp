// classes example

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {

  Rectangle rect1, rect2;

  rect1.set_values (3,4);
  rect2.set_values (5,8);

  cout << "area 1: " << rect1.area() << endl;
  cout << "area 2: " << rect2.area() << endl;

}
