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

  friend ostream& operator<< (ostream& s, const ComplexNumber& c); 
  friend istream& operator>> (istream& s, ComplexNumber& c); 
};

  ostream& operator<< (ostream& outputStream, const ComplexNumber& complexNumber)
{
  outputStream << "real = " << complexNumber.realPart << " complex = " << complexNumber.complexPart << endl;
  return outputStream;
} 

  istream& operator>> (istream& inputStream, ComplexNumber& complexNumber)
{
  inputStream >> complexNumber.realPart >> complexNumber.complexPart;
  return inputStream;
}





int main()
{
  ComplexNumber a(3,5);
  cout << "Initial value of a" << a << endl;

  cin >> a;
  cout << "Final value of a" << a << endl;
  return 0;

}
