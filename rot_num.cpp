#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int nod=0;
	int num=n;
	while(num!=0){
		num/=10;
		nod++;
	}
	int div = pow(10,k);
	int mult = pow(10,nod-k);
	int quetiont = n/div;
	int remainder = n%div;
	int ans = (remainder*mult)+quetiont;
	cout<<ans<<endl;
	return 0;
}

