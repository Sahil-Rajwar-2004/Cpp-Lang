#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	char chr = 'A';
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<chr;
			j++;
		}
		chr++;
		cout<<endl;
		i++;
	}
	return 0;
}

