#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"number: ";
	cin>>n;
	bool isPrime = 1;
	if(n==1){
		cout<<n<<" is the special number"<<endl;	
	}
	else if(n==2){
		cout<<n<<" is the prime number"<<endl;
	}
	else if (n!=1 | n!=2){
		for(int i=2;i<n;i++){
			if(n%i==0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime==0){
			cout<<n<<" is not the prime number"<<endl;
		}
		else{
			cout<<n<<" is the prime number"<<endl;
		}
	}
	return 0;
}
