/*******************************************************************
********************************************************************
****															****
**** Topic  		  = It is a collabroation many c++ programs ****
**** Author			  = Vaibhav 								****
**** Date of starting = 30th August 2017					    ****
****															****
********************************************************************
*******************************************************************/

#include<iostream>
using namespace std;
int main(){
int choice;

cout<<"\n\n\t\t\t\t\t"<<"Welcome to all in one program"<<endl;
cout<<"1.  Area of circle"<<endl;
cout<<"2.  Average of three numbers"<<endl;
cout<<"3.  Finding the factorial of given number"<<endl;
cout<<"4.  Interest calcultor"<<endl;
cout<<"5.  Largest of three numbers"<<endl;
cout<<"6.  Largest of two numbers"<<endl;
cout<<"7.  Reversing an integer"<<endl;
cout<<"8.  Salary calcultor"<<endl;
cout<<"9.  Sum of 'n' numbers in a series"<<endl;
cout<<"10. Swapping of two numbers"<<endl;
cout<<"11. Conversion of Temperature (Celcius to Farenhiet)"<<endl;
cout<<"12. Conversion of Temperature (Farenhiet to Celcius)"<<endl;
cout<<"13. Exit"<<endl<<endl;


for(;;){
	cout<<"Enter Your Choice: ";
	cin>>choice;
	
	/***************************************************************************************************************************************************/
		
	if(choice == 1){
		
		const float _pie = 3.142754;

		float a, c, r; /* c = circumference of circle
				  r = radius of circle
				  a = area of circle */

			cout<<"Enter radius of the given circle: ";
			cin>>r;

				c = 2*_pie*r;
			 	a = _pie*r*r;

			cout<<"Circumference of circle: "<<c<<endl<<"Area of circle: "<<a<<endl;
		
	}
	/***************************************************************************************************************************************************/
	else
	if(choice==2){
		
		float a;
		float b;
		float c;
		float d;
			cout<<"Enter First number : ";
				cin>>a;
			cout<<"Enter Second number : ";
				cin>>b;
			cout<<"Enter Third number : ";
				cin>>c;	

	d=a+b+c;
		d=d/3;
	cout<<d<< " is the average of the three number"<<endl;
		
		
	}
	/***************************************************************************************************************************************************/
	else
	if(choice==3){
	
	
	
	
	
	


									unsigned int n;
									double factorial = 1;
									
								
												
								
												cout<<"Enter a positive number: ";
												cin>>n;
											
								
								
								
								if(n <= 170 && n>0){ 
								
													for
													(int i=1; i<=n; i++)
														{
														
															factorial *= i;
														
														
													
														
														}
													
													
											cout<<"Factorial of "<<n<<" is "<<factorial<<endl;
											
											
											
								
								
								}
								
								
								
																
								
								
								
								
								else if(n > 170){
									cout<<"Infinity"<<endl;
										break;
								}
								
								
							
								
								
								
								
								
								else{
									
									cout<<"Enter a valid number"<<endl;
									
								}
									
								

	

	
	
	
	cout<<"\nThanks"<<endl;
	
	
	
	
	
	
	
	

		

 }
	/***************************************************************************************************************************************************/
	else
		
	if(choice == 4){
		
		
				
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
		
		
	}
	/***************************************************************************************************************************************************/
	else
	if(choice == 5){
		
		
		
		
		
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
		
		
		
	}
	/***************************************************************************************************************************************************/
	else
	if(choice == 6){
		
		
				
	float a;
	float b;
	
		cout<<"Enter 1st number : ";
		cin>>a;
		
		cout<<"Enter 2nd number : ";
		cin>>b;

		if(
			a >= b
				){
					cout<<a<<" is the Largest Number"<<endl;
							}
		if(
			b >= a
				){
					cout<<b<<" is the Largest Number"<<endl ;
							}
		
				
		
		
	}
	/***************************************************************************************************************************************************/
	else
	if(choice == 7){
		
		
				int num, rev=0, rem;

		cout<<"Enter a number: ";
		cin>>num;
		
		while (num!=0)
		

{

		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		

}		



		cout<<"Reverse of the number is: "<<rev<<endl;
		
		
	}
	/***************************************************************************************************************************************************/
	else
	if(choice == 8){
		
		
					float basic, da, hra, gross;
		 cout<<"Enter Basic salary: ";
		 cin>>basic;
		 
		
		    da  = basic * 0.95;
	            hra = basic * 0.3;
	            
	         gross = basic + da + hra;
	         
	         	cout<<"Gross salary is: "<<gross<<endl;
	
		
		
	}
	/***************************************************************************************************************************************************/
	else
	if(choice == 9){
		
		float n_1,n_2,n=1;
	
		cout<<"Value of n: ";
		cin>>n;
		
		n_1 = (n+1);
		n_2 = (n/2);
		n = n_1*n_2;
		cout<<"Sum will be the "<<n<<endl;
	
	
		
	}
	/***************************************************************************************************************************************************/
	else
	if(choice == 10){
		
		
				float a, b;
	
		cout<<"Enter First Number: ";
		cin>>a;		

		cout<<"Enter Second Number: ";
		cin>>b;

	a = a-b;
	b = a+b;
	a = b-a;

               cout<<"After swapping \n  First Number is: "<<a<<"\n Second Number is: "<<b<<endl;
		
		
	}
	/***************************************************************************************************************************************************/
	else
	if(choice == 11){
		
		
		float c, f;  /* f = Temperature in farenhiet
						c = Temperature in celcius */

		cout<<"Enter Temperature in celcius: ";
		cin>>c;

		f= (1.8*c)+32;
		
		
		cout<<"Temperature in farenhiet is "<<f<<endl;
		
		
		
	}
	/***************************************************************************************************************************************************/
	else
	if(choice == 12){
		
		
		

	float c, f;  /* f = Temperature in farenhiet
			c = Temperature in celcius */

		cout<<"Enter Temperature in farenhiet: ";
		cin>>f;

		c = f-32;
		c= (5*c)/9;
		
		cout<<"Temperature in celcius is "<<c<<endl;





	
		
		
	}
	/***************************************************************************************************************************************************/
	else
	if(choice == 13){
		
		
		cout<<"\t\t\t\t\tThanks For Using ";
		break;
		
		
	}
	
	
	/***************************************************************************************************************************************************/
	
	else{
		cout<<"PLease Enter A Valid Choice"<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}













return 0;
}
