#include <iostream>
#include <string>
using namespace std;


int& badFunctionReturnsReferenceToPointer()
{
  // the new is here - but where will the delete be?
  int* x = new int(10);
  return *x;
}


int main()
{

  // Create an integer variable
  int x = badFunctionReturnsReferenceToPointer();
  cout << x << endl;
  // Now no way to delete the pointer!

}
