#include <iostream>

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

  ~ComplexNumber()
  {
    cout << "Inside the destructor: realPart = " << realPart <<" complexPart = " << complexPart << endl; 
  }

  float getRealPart() const { return realPart; }
  void  setRealPart(float r) { realPart = r;} 

};


void printComplexNumberPassByValue(ComplexNumber c)
{
  cout << "Inside printComplexNumber" << endl;
  cout << c.getRealPart() << endl;
  // Attempt to modify the function argument inside the functon
  c.setRealPart(3.14);
}

void printComplexNumberPassByReference(ComplexNumber& c)
{
  cout << "Inside printComplexNumber" << endl;
  cout << c.getRealPart() << endl;
  // Attempt to modify the function argument inside the functon - succeeds!
  c.setRealPart(3.14);
}


void printComplexNumberPassByConstReference(const ComplexNumber& c)
{
  cout << "Inside printComplexNumber" << endl;
  cout << c.getRealPart() << endl;
  // Attempt to modify the function argument inside the functon - Compiler catches it!
  // c.setRealPart(3.14);
}





int main()
{
  ComplexNumber c(3.4,5.3);
  cout << "Before passing by value "<< c.getRealPart() << endl;
  printComplexNumberPassByValue(c);
  cout << "Aftere passing by value "<< c.getRealPart() << endl;

  cout << "Before passing by non-const reference "<< c.getRealPart() << endl;
  printComplexNumberPassByReference(c);
  cout << "After passing by non-const reference "<< c.getRealPart() << endl;


  cout << "Before passing by const reference "<< c.getRealPart() << endl;
  printComplexNumberPassByConstReference(c);
  cout << "After passing by const reference "<< c.getRealPart() << endl;

}
