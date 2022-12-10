#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int *ptr = &n;
	cout<<"n = "<<n<<endl;
	cout<<"&n = "<<&n<<endl;
	cout<<"ptr = "<<ptr<<endl;
	cout<<"*ptr = "<<*ptr<<endl;
	cout<<"&ptr = "<<&ptr<<endl;
	
	return 0;
}


