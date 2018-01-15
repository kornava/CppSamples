#include <iostream>
#include <string>
using namespace std;


int oldSwap(int *a, int* b)
{
  if(a == NULL || b == NULL)
    return -1;

  cout << "Before the swap, inside the old-school swap function" 
       << "a = " << *a
       <<" b = " << *b
       << endl;

  int temp = *a;
  *a = *b;
  *b = temp;


  cout << "After the swap, inside the old-school swap function" 
       << "a = " << *a
       <<" b = " << *b
       << endl;
  return 0;
}

int newSwap(int& a, int& b)
{
  cout << "Before the swap, inside the new-school swap function" 
       << "a = " << a
       <<" b = " << b
       << endl;

  int temp = a;
  a = b;
  b = temp;


  cout << "After the swap, inside the new-school swap function" 
       << "a = " << a
       <<" b = " << b
       << endl;
  return 0;
}




int main()
{
  int a = 5;
  int b = 10;

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Testing the old (C-style) swap~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  cout << "Before the swap, inside main " 
       << "a = " << a
       <<" b = " << b
       << endl;

  oldSwap(&a,&b);
  

  cout << "After the swap, inside main " 
       << "a = " << a
       <<" b = " << b
       << endl;

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Testing the new (C++ -style) swap~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  cout << "Before the swap, inside main " 
       << "a = " << a
       <<" b = " << b
       << endl;

  newSwap(a,b);
  

  cout << "After the swap, inside main " 
       << "a = " << a
       <<" b = " << b
       << endl;

}
