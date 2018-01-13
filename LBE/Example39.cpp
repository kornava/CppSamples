#include <iostream>

using namespace std;

class ComplexNumber
{
private:
  float realPart;
  float complexPart;
  static int numObjectsCreated;
public:
  static int getNumObjectsCreated()
  {
    cout << "Inside the static method " << endl;
    return numObjectsCreated;
  }
  
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

int ComplexNumber::numObjectsCreated = 0; // define the static variable



int main()
{
  cout << "Number of ComplexNumber objects created so far: " 
       << ComplexNumber::getNumObjectsCreated() << endl;
  cout << "Create one object " << endl;
  ComplexNumber c1(1,2);

  cout << "Number of ComplexNumber objects created so far: " 
       << ComplexNumber::getNumObjectsCreated() << endl;
  cout << "Create one object " << endl;
  ComplexNumber c2(3,3);

  cout << "Number of ComplexNumber objects created so far: " 
       << ComplexNumber::getNumObjectsCreated() << endl;
  cout << "Create one object " << endl;
  ComplexNumber c3(4.5,5.3);



}
