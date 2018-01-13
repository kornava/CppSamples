#include <iostream>
#include <string>
using namespace std;

int main()
{
  string someString ("Vitthal Srinivasan");

  char * oldSchoolString = new char [someString.length()+1];
  strcpy (oldSchoolString, someString.c_str());

  string recreatedString(oldSchoolString);


  cout << " Modern (C++) string " << someString << endl
       << " converted to C-style (char*) string " << oldSchoolString << endl
         << " reconverted to Modern C++ string " << recreatedString << endl;

  // oldSchoolString now contains a c-string copy of str
  delete[] oldSchoolString;
  


}
