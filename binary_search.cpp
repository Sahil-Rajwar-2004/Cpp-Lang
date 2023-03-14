#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
	int start = 0;
	int end = size;
	while (start<=end){
		int mid = (start+end)/2;
		if(arr[mid]<target){
			start = mid+1;
		}else if(arr[mid]>target){
			end = mid-1;
		}else{
			return mid;
		}
	}
	return -1;
}

int main(){
	int size;
	cin>>size;

	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	cout<<binarySearch(arr,size,target)<<endl;
	return 0;
}



