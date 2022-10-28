#include <iostream>
using namespace std;

int c = 2;
int main(){
	int c = 23;
	cout<<"The value of c is "<<c<<endl;
	cout<<"The global value of c is "<<::c<<endl;
	cout<<"Add 2 in global value  of c "<<2+::c<<endl;
	return 0;
}


