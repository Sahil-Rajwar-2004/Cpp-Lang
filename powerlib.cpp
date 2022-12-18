#include <iostream>

int power(int base,int exp){
	int ans=1;
	for(int i=0;i<exp;i++){
		ans*=base;
	}
	return ans;
}


