#include <iostream>
using namespace std;

bool power_of_three(int num){
    if(num == 0){
        return false;
    }else if(num == 1){
        return true;
    }else if(num%3 != 0){
        return false;
    }else{
        return power_of_three(num/3);
    }
}

int main(){
    int num;
    cin>>num;
    cout<<power_of_three(num)<<endl;
    return 0;
}
