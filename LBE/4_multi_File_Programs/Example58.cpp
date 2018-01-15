#include <iostream>

using namespace std;

class Shape
{
private:
public: 
  string shapeType;
  virtual void print()
  {
    cout << "I am a shape" << endl; 
  }
  Shape()
  { 
    shapeType = "Unknown";
    cout << "Inside the Shape constructor" << endl;
    print(); //BAD! Virtual function call inside constructor
  }

  ~Shape()
  { 
    cout << "Inside the Shape destructor" << endl;
    print(); // BAD! Virtual function call inside destructor
  }
};


class Rectangle : public Shape
{
public:
  int rectangle_length;
  int rectangle_breadth;
  virtual void print()
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



int main()
{
  Rectangle s1;

  
}
