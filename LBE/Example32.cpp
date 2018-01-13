#include <iostream>
#include <string>
using namespace std;

int main()
{
  char firstName[] = "Vitthal";      
  char lastName[] = "Srinivasan";

  /*char *p1 = firstName;              // non-const pointer, non-const data
  cout << "Initial Value of p1 : " << p1 << endl;
  p1[0] = 'Z';                         // can change the data
  cout <<  "Value of p1 after changing data : " << p1 << endl;
  p1 = lastName; // can change what is pointed to
  cout <<  "Value of p1 after changing what it points to : " << p1 << endl;  
  */

  /*
  const char *p2 = firstName;        // non-const pointer,const data
  cout << "Initial Value of p2 : " << p2 << endl;
  //p2[0] = 'Z';                         // can NOT change the data
  cout <<  "Value of p2 after changing data : " << p2 << endl;
  p2 = lastName; // can change what is pointed to
  cout <<  "Value of p2 after changing what it points to : " << p2 << endl;  
  */

  char * const p3 = firstName;       // const pointer, non-const data
  cout << "Initial Value of p3 : " << p3 << endl;
  p3[0] = 'Z';                         // can change the data
  cout <<  "Value of p3 after changing data : " << p3 << endl;
  p3 = lastName; // can NOT change what is pointed to
  cout <<  "Value of p3 after changing what it points to : " << p3 << endl;  

  const char * const p4 = firstName; // const pointer, const data


  return 0;
}
