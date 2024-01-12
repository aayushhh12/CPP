#include<iostream>
using namespace std;

int main(){
	//cout<<"Hello World\n";
	int savings;
	cin>>savings;
	
	if(savings>5000){
		if(savings>10000){
			cout<<"Roadtrip with NEHA\n";
		}
		else{
			cout<<"Restro with NEHA\n";
		}
	}
	else if(savings>2000){
		cout<<"Rashmi ke sath\n";
	}
	else{
		cout<<"Friends ke sath\n";
	}
	
	return 0;
}
//#include<iostream>
//using namespace std;
//
//int main(){
//	int m;
//	cout<<"Enter the value of m: ";
//	cin>>m;
//	
//	int n;
//	cout<<"Enter the value of n: ";
//	cin>>n;
//	
//	if(m>34){
//		cout<<"The value of m is greater then 34 so the sum is printed: "<<m+n<<endl;
//	}
//	else{
//		cout<<m-n<<endl;
//	}
//	return 0;
//	
//}
//#include<iostream>
//using namespace std;
//
//int main(){
//	int n1,n2;
//	cin>>n1>>n2;
//	
//	int max,min;
//	
//	if(n1>n2){
//		max=n1;
//		min=n2;
//	}
//	else{
//		max=n2;
//		min=n1;
//	}
//	
//	cout<<"Max= "<<max;
//	cout<<"\nMin= "<<min;
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main(){
//	
//	int a,b,c;
//	cout<<"Enter three number:";
//	cin>>a>>b>>c;
//	
//	if(a>b){
//		if(a>c){
//			cout<<"Maximum is:"<<a<<endl;
//		}
//		else{
//			cout<<"Maximum is:"<<c<<endl;
//		}
//	}
//	else{
//		if(b>c){
//			cout<<"Maximum is:"<<b<<endl;
//		}
//		else{
//			cout<<"Maximum is:"<<c<<endl;
//		}
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main(){
//	int sidea, sideb, sidec;
//	cout<<"Input three side of triangle: \n ";
//	cin>>sidea>>sideb>>sidec;
//	
//	if(sidea==sideb && sideb==sidec){
//		cout<<"The triangle is equilateral";
//	}
//	else if(sidea==sideb || sideb==sidec || sidec==sidea){
//		cout<<"The triangle is isoscales";
//	}
//	else{
//		cout<<"The triangle is scales";
//	}
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main(){
//	char n;
//	int isLowercaseVowel, isUppercaseVowel;
//	
//	cout<<"Enter a alphabet: ";
//	cin>>n;
//	
//	isLowercaseVowel = (n=='a' || n=='e' || n=='i' || n=='o' || n=='u');
//	isUppercaseVowel = (n=='A' || n=='E' || n=='I' || n=='O' || n=='U');
//
//	if(isLowercaseVowel || isUppercaseVowel){
//		cout<<n<<": The letter is vowel";
//	}
//	else{
//		cout<<n<<": The letter is consonent";
//	}
//	return 0;
//}
