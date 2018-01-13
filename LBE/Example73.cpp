#include <iostream>
#include <cmath>

using namespace std;



class ComplexNumber_Polar
{
public:
  float modulus;
  float argument;

  ComplexNumber_Polar() : modulus(0.0),argument(0.0)
  {
    cout << "No arg-constructor called" << endl;
  }    
  ComplexNumber_Polar(double amp, double arg) : modulus(amp) , argument(arg)
  {
    cout << "Inside the 2-argument constructor" << endl;  
  }


};


class ComplexNumber
{
private:
  float realPart;
  float complexPart;
public:
  ComplexNumber() : realPart(0.0),complexPart(0.0)
  {
    cout << "No arg-constructor called" << endl;
  }    
  ComplexNumber(double r, double c) : realPart(r) , complexPart(c)
  {
    cout << "Inside the 2-argument constructor" << endl;  
  }

  explicit ComplexNumber(const ComplexNumber_Polar& polar)
  {
    realPart = polar.modulus * cos(polar.argument * 3.1415/180);
    complexPart = polar.modulus * sin(polar.argument * 3.1415/180);
 
  }
  void print()
  {
    cout<<"real = " << realPart << " complex = " << complexPart << endl;
  }
};



void printComplexNumber(ComplexNumber c)
{
  c.print();
}

int main()
{
  ComplexNumber_Polar c(7.0,45);
  //ComplexNumber f1 = c;
  ComplexNumber f = ComplexNumber(c);
  printComplexNumber(static_cast<ComplexNumber>(c));
  

  //printComplexNumber(c);

}
