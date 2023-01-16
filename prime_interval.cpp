#include <iostream>
#include <cmath>
using namespace std;

void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int getPrime(int number){
	int iter,isPrime = 1;
	for(int iter=2;iter<=sqrt(number);iter++){
		if(number%iter==0){
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}

int main(){
	int start,end,point;
	cin>>start>>end;
	if(start>end){
		swap(&start,&end);
	}
	if(start >= 2){
		for(int i=start+1;i<end;++i){
			point = getPrime(i);
			if(point == 1){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}else{
		cout<<"starting point should be greater than or equal to 2"<<end;
	}
	return 0;
}

