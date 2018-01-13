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


class Ellipse_Private : private Shape
{
public:
  Ellipse_Private()
  {
    //cout << privateData;
    cout << protectedData;
    cout << publicData;
  }


};


class Circle_Private : public Ellipse_Private
{
public:
  Circle_Private()
  {
    //cout << privateData;
    //cout << protectedData;
    //cout << publicData;
  }


};




int main()
{
  Circle_Public p1;
  Circle_Private p2;
  Circle_Protected p3;
}
