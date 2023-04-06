#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int occurrence(vector<int> &data,int target){
    unordered_map<int,int> occurrence;
    for(int i = 0;i < data.size();i++){
        occurrence[data[i]]++;
    }

    if(occurrence.find(target) != occurrence.end()){
        return occurrence[target];
    }else{
        return -1;
    }
}

void input(vector<int> &data){
    for(int i = 0;i < data.size();i++){
        cin>>data[i];
    }
}

int main(){
    int size,target;
    cin>>size;
    vector<int> vec(size);
    input(vec);
    cin>>target;
    cout<<occurrence(vec,target)<<endl;
    return 0;
}

