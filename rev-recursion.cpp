#include <iostream>
#include <climits>
using namespace std;

int sum = 0;

void reverse(int num){
	if(num == 0){
		return;
	}
	int rem = num % 10;
	sum = sum * 10 + rem;
	reverse(num/10);
}

int main(){
	int num;
	cin>>num;
	reverse(num);
	cout<<sum<<endl;
}

