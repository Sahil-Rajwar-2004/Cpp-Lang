#include <iostream>
using namespace std;

int main(){
	char button;
	cout<<"Input a character (a,b,c,d,e): ";
	cin>>button;
	
	switch (button)
	{
	case 'a':
		cout<<"Hello"<<endl;
		break;
	case 'b':
		cout<<"Namaste"<<endl;
		break;
	case 'c':
		cout<<"Hola"<<endl;
		break;
	case 'd':
		cout<<"privet"<<endl;
		break;
	case 'e':
		cout<<"pryvit"<<endl;
		break;
	default:
		cout<<"didn't get you";
		break;
	}
	
}

