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
	int size,n;
	cin>>size;
	vector<int> vec;
	for(int i=0;i<size;i++){
		cin>>n;
		vec.push_back(n);
	}
	display(vec);
	vector<int>::iterator iter = vec.begin();
	vec.insert(iter,2,10);
	display(vec);
	return 0;
}

