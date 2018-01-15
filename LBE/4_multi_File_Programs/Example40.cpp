#include <iostream>

using namespace std;

class ComplexNumber
{
private:
  float realPart;
  float complexPart;
public:
  static int numObjectsCreated;

  ComplexNumber() : realPart(0.0),complexPart(0.0)
  {
    // increment the static variable keeping track of objects created
    numObjectsCreated++;
    cout << "No arg-constructor called" << endl;
  }    
  ComplexNumber(double c, double r) : realPart(r) , complexPart(c)
  {
    // increment the static variable keeping track of objects created
    numObjectsCreated++;
    cout << "Inside the 2-argument constructor" << endl;  
  }

  ComplexNumber(const ComplexNumber& rhs) : 
     realPart(rhs.realPart), complexPart(rhs.complexPart)
  {
    // increment the static variable keeping track of objects created
    numObjectsCreated++;
    cout << "Inside the copy constructor" << endl;  
  }

  ~ComplexNumber()
  {
    cout << "Inside the destructor: realPart = " << realPart <<" complexPart = " << complexPart << endl; 
  }

  float getRealPart() const { return realPart; }
  void  setRealPart(float r) { realPart = r;} 

};

//int ComplexNumber::numObjectsCreated = 0; // define the static variable


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
  cout << "Number of ComplexNumber objects created so far: " << ComplexNumber::numObjectsCreated << endl;
  cout << "Create one object " << endl;
  ComplexNumber c1(1,2);

  cout << "Number of ComplexNumber objects created so far: " << ComplexNumber::numObjectsCreated << endl;
  cout << "Create one object " << endl;
  ComplexNumber c2(3,3);

  cout << "Number of ComplexNumber objects created so far: " << ComplexNumber::numObjectsCreated << endl;
  cout << "Create one object " << endl;
  ComplexNumber c3(4.5,5.3);



}
