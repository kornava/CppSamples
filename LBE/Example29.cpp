#include <iostream>
#include <string>
using namespace std;


int& badFunctionReturnsReferenceToStackVariable()
{
  // the variable x is on the stack of this function
  int x(10);
  return x;
  // NO! x will cease to exist when the function returns!
}


int main()
{

  // Create an integer variable
  int x = badFunctionReturnsReferenceToStackVariable();
  cout << x << endl;
  // x will be invalid memory by this point!

}
