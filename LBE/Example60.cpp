#include <iostream>

using namespace std;

class Shape
{
private:
public: 
  string shapeType;
  virtual void printNumber(int number=10)
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
  virtual void printNumber(int number=20)
  {
    cout << "I am a rectangle - printing number" << number << endl; 
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
  Shape * s = new Rectangle();
  s->printNumber();
  delete s;  
}
