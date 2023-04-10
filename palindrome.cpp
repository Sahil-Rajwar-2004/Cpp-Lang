#include <iostream>
#include <vector>
using namespace std;

bool palindrome(int num){
    if(num < 0){
        return false;
    }
    int org = num;
    int rem,rev = 0;
    while(num != 0){
        rem = num%10;
        rev = rev*10+rem;
        num/=10;
    }
    if(org == rev){
        return true;
    }
    return false;
}

int main(){
    int num;
    cin>>num;
    cout<<palindrome(num)<<endl;
    return 0;
}
