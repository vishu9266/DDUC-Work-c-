#include<iostream>
using namespace std;

void swap(int &a, int &b);

int main(){
	
	int a, b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	
	swap(a, b);
	
	cout<<"After swapping, First number is "<<a<<" and second is "<<b;
	return 0;
}

void swap(int &a, int &b){
	
	int c;
	
	c = a;
	a = b;
	b = c;
	
	
}
