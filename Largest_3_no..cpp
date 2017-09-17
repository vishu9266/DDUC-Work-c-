#include <iostream>
using namespace std;
	int main(){
		
	float a;
	float b;
	float c;
		cout<<"Enter 1st number : ";
		cin>>a;
		
		cout<<"Enter 2nd number : ";
		cin>>b;

		cout<<"Enter 3rd number : ";
		cin>>c;

		if(
			a >= b && a >= c
				){
					cout<<a<<" is the Largest Number";
							}
		if(
			b >= a && b >= c
				){
					cout<<b<<" is the Largest Number" ;
							}
		if(
			c >= a && c >= b
				){
					cout<<c<<" is the Largest Number" ;
							}
		cout<<endl;		
		return 0;
}
