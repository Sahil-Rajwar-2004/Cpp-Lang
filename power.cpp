#include <iostream>
using namespace std;

int solve(int num,int power){
	if(power == 0){
		return 1;
	}
	return num*solve(num,power-1);
}

int main(){
	int num,power;
	cin>>num>>power;
	cout<<solve(num,power)<<endl;
	return 0;
}

