#include <iostream>
using namespace std;

int main(){
	int number;
	int start = 2;
	cout<<"number: ";
	cin>>number;
	while(start<number){
		if(number%start==0){
			cout<<number<<" is not prime for: "<<start<<endl;
		}else{
			cout<<number<<" is prime for: "<<start<<endl;
		}
		start++;
	}

	return 0;
}

