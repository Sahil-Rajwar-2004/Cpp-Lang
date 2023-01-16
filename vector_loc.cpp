#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int size,n,loc;
	cin>>size;
	vector<int> vec;
	for(int i=0;i<size;i++){
		cin>>n;
		vec.push_back(n);
	}
	display(vec);
	cout<<"index: ";
	cin>>loc;
	if(loc<size && loc>=0){
		cout<<vec.at(loc)<<endl;
	}else{
		cout<<"out of range"<<endl;
	}
	return 0;
}

