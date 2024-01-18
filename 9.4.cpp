// Write a program to find whether an alphabet is a vowel or a consonant
#include<iostream>
using namespace std;

int main(){
	char v;
	cout<<"Enter a alphabet: ";
	cin>>v;
	
	switch (v) {
		case 'a':
			cout<<"The letter is vowel"<<endl;
			break;
		case 'e':
			cout<<"The letter is vowel"<<endl;
			break;
		case 'i':
			cout<<"The letter is vowel"<<endl;
			break;
		case 'o':
			cout<<"The letter is vowel"<<endl;
			break;
		case 'u':
			cout<<"The letter is vowel"<<endl;
			break;
		default:
			cout<<"The letter is consonant"<<endl;
			break;
	}
	return 0;
}
