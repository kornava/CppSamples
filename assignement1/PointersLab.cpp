#include <iostream>

using namespace std;
void passByValue(int val);
void passByRef(int* val);

int main()
{
	int num1;
	int* pNum=new int;

	num1 = 3;
	*pNum = 5;

	passByValue(num1);
	cout<<num1<<endl;

	passByRef(pNum);
	cout<<*pNum<<endl;
	double dble1 = 4;
	double* dble=new double;
	*dble = 1;
	dble = &dble1;
	cout<<*dble<<endl;

	return 0;
}

void passByValue(int val)
{
	cout<<"passByValue"<<endl;
	val = 55;
	cout<<val<<endl;
}

void passByRef(int* val)
{
	cout<<"passByRef"<<endl;
	*val = 50;
	cout<<*val<<endl;
}

