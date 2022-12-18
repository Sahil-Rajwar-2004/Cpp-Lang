#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int f,sum=0;
	cin>>f;
	while(f--){
		int n;
		cin>>n;
		n = pow(n,3);
		sum+=n;
	}
	cout<<sum<<endl;
	return 0;
}

