#include <iostream>

using namespace std;

class Shape
{
private:
public: 
  string shapeType;
  void printNumber(int number)
  {
    cout << "I am a shape - printing number" << number << endl; 
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
  void printNumber()
  {
    cout << "I am a rectangle - printing number" <<  endl; 
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

  Rectangle r;
  r.printNumber();  // works OK
  r.Shape::printNumber(10); // unexpected compile error! 
}
