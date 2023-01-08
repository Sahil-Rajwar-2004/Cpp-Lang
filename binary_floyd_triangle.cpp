#include <iostream>
using namespace std;

int main(){
	int n,start = 0;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(start == 0){
				start = 1;
			}else{
				start = 0;
			}
			cout<<start<<" ";
		}
		cout<<endl;
	}

	return 0;
}


