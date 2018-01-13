#include <iostream>

using namespace std;

class Shape
{
private:
  string shapeType;
public: 
  virtual void print() = 0;
  // a pure virtual function
  // (no implementation)
};


class Circle : public Shape
{
public:
  void print()
  {
    cout << "I am a circle" << endl;
  }
};


int main()
{
  //Shape s1; // Compile error: can not instantiate an abstract class
  Circle c1;
  c1.print();

}
