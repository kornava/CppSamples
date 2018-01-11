#include <iostream>
using namespace std;

int main(){


	int num = 3;            // a simple variable holding the value 3
	int *pNum ;

	pNum= &num;        // a pointer holding the address of num



	cout << pNum << endl;    // output the memory address of num

	cout << *pNum << endl;    // output the value 3
	*pNum = 44;


	cout << *pNum << endl;    // output the value 3
	return 0;
}
