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

  // ++a i.e. the post-increment
  ComplexNumber& operator++()
  {
    cout << "Inside the pre-increment operator" << endl;
    this->realPart++;
    this->complexPart++;
    return *this; 
  }

  // a++ i.e. the post-increment
  const ComplexNumber operator++(int) 
  { 
    cout << "Inside the post-increment operator" << endl;
    ComplexNumber result(this->realPart,this->complexPart);
    this->realPart++;
    this->complexPart++;
    return result;
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

  
  cout << "Initial value of a" << endl;
  a.print();

  cout << "Now call the post-increment operator" << endl;
  ComplexNumber b = a++;

  cout << "Result of b=a++ was " << endl;
  b.print();



  cout << "Now the value of a is" << endl; 
  a.print();

  cout << "Now call the pre-increment operator" << endl;
  ComplexNumber c = ++a;

  cout << "Result of c=++a was " << endl;
  c.print();

  cout << "Now the value of a is" << endl; 
  a.print();

  //  int x,y;
  ++a = b; // should compile - because pre-increment returned non-const reference
  a++++;  // should not compile - because post-increment returned const

}
