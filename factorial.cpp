#include<iostream>
using namespace std;
int main()
{
	
	
	char yes;
	
	
	for(;;){


									unsigned int n;
									double factorial = 1;
									
								
												   /*********************************************
													**** There are two variables declared    ****
													**** which is 'factorial' and 'n' 		 ****
													**** n is used for the input from user   ****
													**** 			and						 ****
													**** factorial is use for processing     ****
													*********************************************/
								
												cout<<"Enter a positive number: ";
												cin>>n;
											
								
								
/*******************************************************************************************************************************************/								
								if(n <= 170 && n>0){ 
								
													for
													(int i=1; i<=n; i++)
														{
														
															factorial *= i;
														
														
													
														
														}
													
													
											cout<<"Factorial of "<<n<<" is "<<factorial<<endl;
											
											
											
								
								
								}
								
								
								
								
/*******************************************************************************************************************************************/								
								
								
								
								
								else if(n > 170){
									cout<<"Infinity"<<endl;
										break;
								}
								
								
/*******************************************************************************************************************************************/								
								
								
								
								
								
								else{
									
									cout<<"Enter a valid number"<<endl;
									
								}
									
								

	
}
	
	
	
	cout<<"\nThanks"<<endl;
	
	
	
	
	
	
	
	return 0;
}