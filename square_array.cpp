#include <iostream>
#include <vector>
using namespace std;

void display(vector<double> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void squaring(vector<double> &v){
	for(int i=0;i<v.size();i++){
		v[i]=v[i]*v[i];
	}
}

int main(){
	int size;
	cin>>size;
	vector<double> vec;
	for(int i=0;i<size;i++){
		int n;
		cin>>n;
		vec.push_back(n);
	}
	squaring(vec);
	display(vec);
	return 0;
}


