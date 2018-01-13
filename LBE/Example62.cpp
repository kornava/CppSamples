#include <iostream>

using namespace std;

class Shape
{
private:
public: 
  string shapeType;
  void print()
  {
    cout << "I am a shape " << endl;
  }
  Shape()
  { 
    shapeType = "Unknown";
    cout << "Inside the Shape constructor" << endl;
  }

  virtual ~Shape()
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
    cout << "I am a rectangle " << endl;
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



int main()
{
  Rectangle rect;
  Shape * shapePtr = &rect;
  Rectangle * rectPtr = &rect;

  shapePtr->print();
  rectPtr->print();


}
