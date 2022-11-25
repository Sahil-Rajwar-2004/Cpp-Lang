#include <iostream>
using namespace std;

int main(){
	int num,sum=0;
	cout<<"number: ";
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	cout<<"sum: "<<sum<<endl;
	return 0;
}

