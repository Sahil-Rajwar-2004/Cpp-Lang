#include <iostream>
#include <vector>
using namespace std;

int remove_duplicate(vector<int> &array){
    if(array.size() == 0) return 0;
    for(int i = 0;i < array.size();i++){
        
    }
}

int main(){
    vector<int> array = {0,0,1,1,1,2,2,3,3,4};
    int len = remove_duplicate(array);
    for(int i = 0;i < len;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}
