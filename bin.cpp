#include <iostream>
using namespace std;

class binary{
    string s;
    public:
        void read(void);
        void ones(void);
        void display(void);
        bool check_bin(void);
};

void binary::read(void){
   cin>>s;
}

bool binary::check_bin(void){
    for (int i = 0;i < s.length();i++){
        if (s.at(i) != '0' && s.at(i) != '1'){
            return false;
        }
    }return true;
}

void binary::ones(void){
    if (binary::check_bin()){
        for(int i = 0;i < s.length();i++){
            if(s.at(i) == '1'){
                s.at(i) = '0';
            }else{
                s.at(i) = '1';
            }
        }
    }
}

void binary::display(void){
    if (binary::check_bin()){
        for (int i = 0; i < s.length();i++){
            cout<<s.at(i);
        }
        cout<<endl;
    }
}

int main(){
    binary b;
    b.read();
    b.ones();
    b.display();
    return 0;
}
