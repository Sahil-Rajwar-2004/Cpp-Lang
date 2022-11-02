#include <iostream>
using namespace std;

int main(){
	int len;
	cout<<"length of an array: ";
	cin>>len;
	int arr[len];
	for(int i=0;i<len;i++){
		cout<<"at "<<i<<": ";
		cin>>arr[i];
	}
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}

