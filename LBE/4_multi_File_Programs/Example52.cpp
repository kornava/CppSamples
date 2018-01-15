#include <iostream>

using namespace std;

class Shape
{
private:
  string shapeType;
  int privateData;
protected:
  int protectedData;
public: 
  int publicData;
};


class Ellipse_Protected : protected Shape
{
public:
  Ellipse_Protected()
  {
    //cout << privateData;
    cout << protectedData;
    cout << publicData;
  }


};

class Circle_Protected : public Ellipse_Protected
{
public:
  Circle_Protected()
  {
    //cout << privateData;
    cout << protectedData;
    cout << publicData;
  }


};


class RedCircle : public Circle_Protected
{
public:
  RedCircle()
  {
    //cout << privateData;
    cout << protectedData;
    cout << publicData;
  }


};




int main()
{

  Circle_Protected p3;
}
