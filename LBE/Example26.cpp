#include <iostream>
#include <string>
using namespace std;


int main()
{

  // Create a pointer to an int, initialize to some value
  int *x = new int(5);
  // Create a reference to that variable: call it reference #1
  int* & y = x;
  
  cout << "contents of the pointer x = " << *x << " and contents of the reference pointer y = " << *y << endl;

  delete x;
  // don't delete y, because that will lead to the same memory be deallocated twice!


}
