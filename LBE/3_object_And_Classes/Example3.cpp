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
  void setMemberVariables(double r,double c)
  {
    realPart = r;
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
    cout<<"real = " << realPart << " complex = " << complexPart;
  }
};

int main()
{
  ComplexNumber c;
  cout<< "Hello there" <<endl;
  c.print();
  cout<<endl;
  c.setMemberVariables(3.14,5.3);
  cout<<endl;
  c.print();
  cout<<"Okey-dokey! All done!"<<endl;

}
