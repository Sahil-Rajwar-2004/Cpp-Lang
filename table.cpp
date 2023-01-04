#include <iostream>
using namespace std;

int main(){
	int n,range,res;
	cin>>n>>range;
	for(int i=1;i<=range;i++){
		res = n*i;
		cout<<n<<" x "<<i<<" = "<<res<<endl;
	}
	return 0;
}

