//#include<iostream>
//using namespace std;
//
//int main(){
//	int a;
//	cin>>a;
//	
//	if(a%2==0){
//		cout<<"Even num\n";
//	}
//	else{
//		cout<<"Odd num\n";
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main(){
//	
//	int n;
//	cin>>n;
//	
//	int sum=0;
//	for(int counter=1;counter<=n;counter++){
//		sum=sum+counter;
//	}
//	
//	cout<<sum<<endl;
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cout<<"Enter +ve integer:";
//	cin>>n;
//	
//	for(int i = 1; i <= 20; i++){
//		cout<<n<<"*"<<i<<"="<<n*i<<endl;
//	}
//	
//	return 0;
//}
#include<iostream>
using namespace std;

int main(){
	int number;
	int sum = 0;
	
	cout<<"Enter a number:";
	cin>>number;
	
	while(number>=0){
		
		sum += number;
		cout<<"Enter a number:";
		cin>>number;
	}
	
	cout<<"\nThe sum is "<<sum << endl;
	
	return 0;
}
