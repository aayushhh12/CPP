//#include<iostream>
//using namespace std;
//
//int main(){
//	//cout<<"Hello World\n";
//	int amount1;
//	cin>>amount1;
//	
//	int amount2;
//	cin>>amount2;
//	
//	int sum=amount1+amount2;
//	cout<<"sum";
//	cout<<sum; 
//	
//	return 0;
//}
#include<iostream>
using namespace std;

int main(){
	int m;
	cout<<"Enter the value of m: ";
	cin>>m;
	
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	
	int sum=m+n;
	cout<<"Sum of the entered value is: "<<sum<<endl;
	
	int multiple=m*n;
	cout<<"The multiple of the entered value is: "<<multiple<<endl;
	
	int division=m/n;
	cout<<"Division of entered value: "<<division<<endl;
	
	return 0;
}

