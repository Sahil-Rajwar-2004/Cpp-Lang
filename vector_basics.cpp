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
	vector<int> vec1;
	for(int i=0;i<size;i++){
		cin>>n;
		vec1.push_back(n);
	}
	display(vec1);
	vec1.pop_back();
	display(vec1);
	return 0;
}

