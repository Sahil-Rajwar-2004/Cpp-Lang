#include <iostream>
using namespace std;

int main(){
	int n;
	int i=1;
	int count=1;
	cin>>n;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<count;
			j++;
		}
		cout<<endl;
		count++;
		i++;
	}

	return 0;
}


