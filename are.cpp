#include<iostream>
using namespace std;

int add(int result);

int main(){
	int a, b, result;
	cout<<"a";
	cin>>a;
	cout<<"b";
	cin>>b;
	result = add(result);
	cout<<endl<<result;
	return 0;
}

int add(int a, int b)
{
	int result;
	 result = a + b;
	 return (result);
}
