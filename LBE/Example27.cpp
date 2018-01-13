#include <iostream>
#include <string>
using namespace std;


int main()
{

  // Create an integer variable
  int x = 5;
  // Create a reference to that variable: call it reference #1
  int & y = x;
  
  // Try to create a reference to the reference - compiler won't allow it
  int & & z = y;

}
