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
  float * floatDynamic = new float[10];
  delete[] floatDynamic;


  ComplexNumber * cDynamic = new ComplexNumber[10];
  for(int i = 0;i<10;i++)
  {
    cout << "Printing out dynamically allocated object" << i << endl;
    cDynamic[i].print();
  }
  delete cDynamic;
  cout<<"Okey-dokey! All done!"<<endl;


}
