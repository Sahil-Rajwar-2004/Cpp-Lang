#include <iostream>
using namespace std;

int main(){
	int i,j,k;
	cin>>i>>j;
	k = i-- - i++ + --j + --j + --i - j-- + ++i - j++;
	cout<<k<<endl;
	return 0;
}

