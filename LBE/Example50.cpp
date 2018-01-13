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


class Ellipse_Public : public Shape
{
public:
  Ellipse_Public()
  {
    //cout << privateData;
    cout << protectedData;
    cout << publicData;
  }

};

class Circle_Public : public Ellipse_Public
{
public:
  Circle_Public()
  {
    //cout << privateData;
    cout << protectedData;
    cout << publicData;
  }


};


int main()
{
  Circle_Public p1;
  Circle_Private p2;
  Circle_Protected p3;
}
