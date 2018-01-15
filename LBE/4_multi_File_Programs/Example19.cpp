#include <iostream>
#include <string>
using namespace std;


int main()
{

  int x = 5;
  int& y = x;

  cout << "Initially, x = " << x << " y = " << y << endl;
  y = 10;
  cout << "Change the value of y to " << y << endl;
  cout << "Finally, x = " << x << " y = " << y << endl;

}
