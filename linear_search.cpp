#include <iostream>
using namespace std;

int linear_search(int array[], int size,int target){
	for(int i=0;i<size;i++){
		if(target == array[i]){
			return i;
		}
	}
	return -1;
}

void input(int array[],int size){
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
}

int main(){
	int size,target;
	cin>>size;
	int array[size];
	input(array,size);
	cin>>target;
	cout<<linear_search(array,size,target)<<endl;
}

