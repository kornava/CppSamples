#include <iostream>
#include <string>
using namespace std;

int main()
{
  // create a const int variable - the declaration and initialisation must be in the same sentence
  const int x = 5;
  // Why must the initialisation occur in the definition itself? Because re-assignment to a const will not work
  //x = 10;
  
  // create a const string
  const string firstName("Vitthal");
  // Any attempt to modify this string will throw some ferocious errors!
  //firstName.insert(0,"Mr. ");

  return 0;
}
