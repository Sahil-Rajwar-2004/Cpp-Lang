#include <iostream>
using namespace std;

void power(int base,int exp){
	int ans=1;
	for(int i=0;i<exp;i++){
		ans*=base;
	}
	cout<<ans<<endl;
}

int main(){
	int x,y;
	cin>>x>>y;
	power(x,y);
	return 0;
}


