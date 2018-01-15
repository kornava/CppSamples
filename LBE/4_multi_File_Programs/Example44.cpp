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
  ComplexNumber c(9,11);

  a.print();
  a += b;
  a.print();


  (a += b) += c;
  a.print();


}
