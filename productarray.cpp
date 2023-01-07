#include <iostream>
using namespace std;

int main(){
	int p = 1,size;
	cin>>size;
	int arr[size];

	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	for(int i=0;i<size;i++){
		p *= arr[i];
	}
	cout<<p<<endl;

	return 0;
}

