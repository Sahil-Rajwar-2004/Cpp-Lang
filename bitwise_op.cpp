#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"a&b = "<<(a&b)<<endl; //and
    cout<<"a|b = "<<(a|b)<<endl; //or
    cout<<"not a = "<<~a<<endl;  //not
    cout<<"not b = "<<~b<<endl;  //not
    cout<<"a^b = "<<(a^b)<<endl; //xor

    cout<<(2>>1)<<endl; //right shift
    cout<<(2>>2)<<endl; //right shift
    cout<<(2<<1)<<endl; //left shift
    cout<<(2<<2)<<endl; //left shift
    return 0;
}
