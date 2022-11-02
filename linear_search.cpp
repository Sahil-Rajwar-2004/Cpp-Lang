#include <iostream>
using namespace std;

int main(){
	int number;
	cout<<"search: ";
	cin>>number;
	
	int arr[] = {7,6,1,3,2,9,0,4,5,8};
	int size = sizeof(arr)/sizeof(arr[0])-1;
	for(int i=0;i<size;i++){
		if (arr[i] == number){
			cout<<number<<" found at index number: "<<i<<endl;
			break;
		}else{
			cout<<number<<" not found!"<<endl;
		}
	}
	return 0;
}


