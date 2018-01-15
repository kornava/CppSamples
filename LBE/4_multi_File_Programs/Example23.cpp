#include <iostream>
#include <string>
using namespace std;


int main()
{

  int x = 5;
  int z = 3;
  int& y = x;
  
  cout <<" x = " << x << " y = " << y << " z = " << z << endl;
  y = z;

  y = 10;

  // Now modify y - will it be x or z that is modified? Answer: x
  cout <<" x = " << x  << " y = " << y << " z = " << z << endl;


}
