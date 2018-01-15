#include <iostream>

using namespace std;

class ComplexNumber
{
private:
  float realPart;
  float complexPart;
public:
  ComplexNumber(double c, double r) : realPart(r) , complexPart(c)
  {
    cout << "Inside the 2-argument constructor" << endl;  
  }
  const ComplexNumber operator+(const ComplexNumber &rhs) const 
  {
    ComplexNumber result(this->realPart + rhs.realPart, 
                    this->complexPart + rhs.complexPart);
    return result;
  }


  ComplexNumber& operator+=(const ComplexNumber &rhs) 
  {
    this->realPart += rhs.realPart;
    this->complexPart += rhs.complexPart;
    return *this;
  }



  void setRealPart(double r)
  {
    realPart = r;
  }

  void setComplexPart(double c)
  {
    complexPart = c;
  }

  float getRealPart()
  {
    return realPart;
  }

  float getComplexPart()
  {
    return complexPart;
  }
  void print()
  {
    cout<<"real = " << realPart << " complex = " << complexPart << endl;
  }
};

int main()
{
  ComplexNumber a(3,5);
  ComplexNumber b(7,6);
  ComplexNumber c = a + b;
  ComplexNumber d(0,0);

  a.print();
  b.print();
  c.print();

  // will not compile, because operator+ returns a const, *NOT* a const reference
  (a+b)=d;

  //int x,y,z;
  //(x+y)=z; // will not compile for ints, should not compile for user-defined classes either

}
