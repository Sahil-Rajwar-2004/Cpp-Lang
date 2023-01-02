#include <iostream>
using namespace std;

int main(){
	int h = -9999;
	int size;
	cin>>size;

	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	for(int i=0;i<size;i++){
		if(h<=arr[i]){
			h = arr[i];
			cout<<h<<endl;
		}
	}

	return 0;
}

