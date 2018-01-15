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
  Shape * shape2 = new Shape();
  Shape * shape = new Rectangle();
  Rectangle * rectangle = new Rectangle();

  // dynamic_cast #1: successful - cast is possible, so return value is a valid pointer
  Rectangle * rectangle2 = dynamic_cast<Rectangle*>(shape);
  if(rectangle2 != NULL)
    {
      cout << "Downcast from Shape to Rectangle was successful!" << endl;
      rectangle2->print();
    }
  else 
      cout << "Downcast from Shape to Rectangle was NOT successful!" << endl;

  // dynamic_cast #2: unsuccessful - cast is no possible, so return value is NULL
  Rectangle * rectangle3 = dynamic_cast<Rectangle*>(shape2);
  if(rectangle3 != NULL)
    {
      cout << "Downcast from Shape to Rectangle was successful!" << endl;
      rectangle3->print();
    }
  else 
      cout << "Cast from Shape to Rectangle was NOT successful!" << endl;


  cout << "Using RTTI to print the type of an object :";
  cout << typeid(*rectangle2).name() << endl;

  delete shape2;
  delete shape;
  delete rectangle;

  return 0;
}

