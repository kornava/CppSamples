#include <iostream>
    
using namespace std;
    
int main()
{
    
        int num = 3;
        int *pNum = &num;

        cout << pNum << endl;


 	int *pNum1 = 0;  // not recommended
    
    	cout << pNum1 << endl;


        return 0;
}

