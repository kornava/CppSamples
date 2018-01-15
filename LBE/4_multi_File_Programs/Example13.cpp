#include <iostream>
#include <new>

using namespace std;

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
  ComplexNumber(double c, double r) : realPart(r) , complexPart(c)
  {
    cout << "Inside the 2-argument constructor" << endl;  
  }

  ComplexNumber(const ComplexNumber& rhs) : 
     realPart(rhs.realPart), complexPart(rhs.complexPart)
  {
    cout << "Inside the copy constructor" << endl;  
   
  }

  void printThis()
  {
    cout << "The address of this object is: "<< this << endl;
    cout << "real part = " << this->realPart <<  "imaginary part = " << this->complexPart << endl;
  }


  ~ComplexNumber()
  {
    cout << "Inside the destructor: realPart = " << realPart <<" complexPart = " << complexPart << endl; 
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
  char memoryBuffer[sizeof(ComplexNumber)];
  void *place = (void*)memoryBuffer;

  ComplexNumber * cPlacedNew = new(place) ComplexNumber(10,5);
  cPlacedNew->printThis();
  cout << "Let's see if the address of our variable matches the address of 'this' " << cPlacedNew << endl;

  // Now need to explicitly call the destructor when using placement new
  cPlacedNew->~ComplexNumber();

  cout<<"Okey-dokey! All done!"<<endl;


}
