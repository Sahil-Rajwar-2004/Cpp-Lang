#include <iostream>
using namespace std;

int main(){
	int scores[] = {1,2,3,4,5,6,7,8,9,0};
	int len = sizeof(scores)/sizeof(scores[0])-1;
	for (int i=0;i<=len;i++){
		cout<<scores[i]<<endl;
	}
	return 0;
}

