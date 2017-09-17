#include<iostream>
using namespace std;

int lsearch(int Arr[], int n, int VAL);

int main()
{
	int Arr[10], VAL, n, s;
	int found;
	
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		
		cout<<"Enter Element "<<i+1<<" : ";
		cin>>Arr[i];
		
	}
	cout<<"ENter the number you want to search ";
	cin>>VAL;
	
	found = lsearch(Arr, n, VAL);
	
	if(found){
		cout<<endl<<s;
		
	}
	
	else
		cout<<"not found";
	
	return 0;
}

int lsearch(int Arr[], int n, int VAL)
{
	
	int s;
	
	for(int i = 0; i<n; i++){
		
		if(Arr[i] == VAL){
			s = n;
		}
		
	}
	
	return n;
	
	
}