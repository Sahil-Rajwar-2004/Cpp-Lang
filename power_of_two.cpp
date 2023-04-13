#include <iostream>
using namespace std;

bool power_of_two(int number){
    if(number == 0){
        return false;
    }else if(number == 1){
        return true;
    }else if(number%2 == 1){
        return false;
    }else{
        return power_of_two(number/2);
    }
}

int main(){
    int number;
    cin>>number;
    cout<<power_of_two(number)<<endl;
    return 0;
}
