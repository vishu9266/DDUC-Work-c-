#include<iostream>
using namespace std;
	int main(){
		
		float p, i, r, t; /* i = interest
					p = principle
					r = rate
					t = time  */

		cout<<"Enter Principle value: ";
		cin>>p;
		
		cout<<"Enter Rate of Interst: ";
		cin>>r;
	
		cout<<"Enter Time Duration: ";
		cin>>t;

			i = (p * r * t ) / 100;
			//i = i/100;

			cout<<"Total Interst is: " <<i<<endl;

return 0;




}
