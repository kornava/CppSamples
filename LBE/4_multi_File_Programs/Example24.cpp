#include <iostream>
#include <string>
using namespace std;


int main()
{

  // Create a simple variable 
  int x = 5;
  // Create a reference to that variable: call it reference #1
  int& y = x;
  // Create another reference to that variable: call it reference #2
  int& z = x;
  
  cout <<" x = " << x << " y = " << y << " z = " << z << endl;
  // Now modify only reference #2
  z = 10;
  // Has reference #1 changed? Has the original changed? yes and yes
  cout <<" x = " << x  << " y = " << y << " z = " << z << endl;


}
