#include <iostream>

using namespace std;

class Vehicle{

	int id;
	public:
Vehicle(int x):id(x){
//return 5;
}

Vehicle(Vehicle &v):id(v.id){
}
int getID(){
	return id;
}


};


int main(){
	std::cout<<"Hello world"<<std::endl;
	Vehicle v(4),B(13);
	cout<<"v = "<<v.getID()<<"B = "<<B.getID()<<endl;
B=v;
	cout<<"v = "<<v.getID()<<"B = "<<B.getID()<<endl;
	return 0;
}

