#include <iostream>
using namespace std;

int sum(int x,int y){
	int a = x+y;
	return a;
}

int main(){
	int i,j;
	cout<<"i = ";
	cin>>i;
	cout<<"j = ";
	cin>>j;
	cout<<i<<" + "<<j<<" = "<<sum(i,j)<<endl;
	return 0;
}


