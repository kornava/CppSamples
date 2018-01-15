#include <iostream>

using namespace std;

class Shape
{
private:
  string shapeType;
public: 
  virtual void print() = 0;
  Shape()
  { 
    cout << "Inside the Shape constructor" << endl;
  }

  ~Shape()
  { 
    cout << "Inside the Shape destructor" << endl;
  }
};


class Rectangle : public Shape
{
public:
  int rectangle_length;
  int rectangle_breadth;
  void print()
  {
    cout << "I am a rectangle" << endl;
  }
  Rectangle()
  { 
    cout << "Inside the Rectangle constructor" << endl;
  }
  ~Rectangle()
  { 
    cout << "Inside the Rectangle destructor" << endl;
  }
};

class Rhombus : public Shape
{
public:
  float angleBetweenSides;
  void print()
  {
    cout << "I am a rhombus" << endl;
  }
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
  //s1.print();
  s1.Rectangle::print();
  s1.Rhombus::print();
}
