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
  virtual void print() const
  {
    cout << "I am a shape, and my size is " << sizeof(*this) << " bytes " << endl; 
  }
};


class Rectangle : public Shape
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
  virtual void print() const
  {
    cout << "I am a rectangle,, and my size is " << sizeof(*this) << " bytes " << endl; 
  }
};

void callPrint_Sliced(Shape s)
{
  cout << endl << "Slicing is about to occur" << endl; 
  s.print();
}

void callPrint_NonSliced(const Shape& s)
{
  cout << endl << "No slicing can occur here" << endl; 
  s.print();
}



int main()
{
  Rectangle r;
  callPrint_Sliced(r);
  callPrint_NonSliced(r);
}
