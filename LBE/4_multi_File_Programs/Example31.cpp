#include <iostream>
#include <string>
using namespace std;

int main()
{
  // create a non-const int variable
  int x = 5;
  // create a const reference to this (non-const) int 
  const int& y = x;
  cout << "Initial value of y = " << y << " and that of x = " << x << endl;
  // modify x
  x += 10;
  y = 10;
  // has the value of y changed?
  cout << "Final value of y = " << y << " and that of x = " << x << endl;
  // Yes it has! The const reference was modified simply by changing the original variable it pointed to!
  return 0;
}
