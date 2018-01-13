#include <iostream>

using namespace std;

class Shape
{
private:
public: 
  string shapeType;

  Shape()
  { 
    shapeType = "Unknown";
    cout << "Inside the Shape constructor" << endl;
  }

  ~Shape()
  { 
    cout << "Inside the Shape destructor" << endl;
  }
};


class Rectangle : virtual public Shape
{
public:
  int rectangle_length;
  int rectangle_breadth;
  Rectangle()
  { 
    cout << "Inside the Rectangle constructor" << endl;
  }
  ~Rectangle()
  { 
    cout << "Inside the Rectangle destructor" << endl;
  }
};

class Rhombus : virtual public Shape
{
public:
  float angleBetweenSides;
  Rhombus()
  { 
    cout << "Inside the Rhombus constructor" << endl;
  }
  ~Rhombus()
  { 
    cout << "Inside the Rhombus destructor" << endl;
  }

};


class Square : public Rhombus, public Rectangle
{
public:
  Square()
  { 
    cout << "Inside the Square constructor" << endl;
  }
  ~Square()
  { 
    cout << "Inside the Square destructor" << endl;
  }

};


int main()
{
  Square s1;
  cout << s1.shapeType; 
  // this is only possible because of the virtual inheritance 
  // from rectangle, rhombus to shape. Else would have needed
  // s1.Rectangle::shapeType

  //s1.Rectangle::print();
  //s1.Rhombus::print();
  cout << sizeof(s1);
}
