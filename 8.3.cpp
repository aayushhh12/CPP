#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	cout<<"Input A";
	cin>>a;
	cout<<endl;
	cout<<"Input B";
	cin>>b;
	cout<<endl;
	
	for(int num=a; num<=b; num++){
		int i;
		for(i=2;i<num;i++){
			if(num%i==0){
				break;
			}
		} 
		if(i==num){
			cout<<num<<endl;
		}
	}
	return 0;
}
//examples to print the prime number in range
