#include <iostream>
using namespace std;

int main(){
	
	int savings;
	cin>>savings;
	
	if (savings>50000){
		cout<<"Invest the money"<<endl;
	}	else if (savings == 0){ 
		cout<<"You have nothing to loose"<<endl;
	}	else if (savings<50000){
		cout<<"Save the money"<<endl;
	}
	
	return 0;
}

