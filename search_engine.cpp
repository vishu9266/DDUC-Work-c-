#include<iostream>
using namespace std;


// Declation of variables
char choice = 'Y';
int one_or_two, by_marks, by_roll_number, number_of_students, by_roll_number_address, i;
int marks[1];

// Declation of functions
void inputting_marks(int number_of_students);
void enter_choice();
void enter_choice_yes();
void enter_choice_yes_one();
void enter_choice_yes_two();
void enter_choice_no();

//Main function
int main()
{
	
	cout<<"Enter total no. of students: ";
	cin>>number_of_students;
	
	inputting_marks(number_of_students);
	
	enter_choice();
	
	return 0;
}



// Other functions

void inputting_marks(int number_of_students)
{
	for(i=0; i<number_of_students; i++){
		
		cout<<"Enter the marks of student "<<i+1<<" :";
		cin>>marks[i];
		
		
	}
}


void enter_choice(){
	
	cout<<endl<<"Do you want to search a student (Y/N): ";
	cin>>choice;
	
	
	if(choice == 'Y' || choice == 'y'){
		
		enter_choice_yes();
		
		}
	
	else
		
	
		enter_choice_no();
		
	
	
}

void enter_choice_yes()
{
	
	cout<<"1. By marks"<<endl<<"2. By Roll number"<<endl<<"Enter your choice: ";
		cin>>one_or_two;
		
		if(one_or_two == 1){
			
			enter_choice_yes_one();
			
		}
		else
			if(one_or_two == 2){
				
				enter_choice_yes_two();
	
				
			}
		
	}
			
void enter_choice_yes_one(){
	
	cout<<"Enter the marks of the student: ";
			cin>>by_marks;
			
			// Creating search for marks
	
			
	
}		
	

void enter_choice_yes_two(){
	
	// Creating search by roll number
				
				cout<<"Enter roll number of student: ";
				cin>>by_roll_number_address;
				
				by_roll_number = by_roll_number_address-1;
				
				cout<<"Marks of student "<<by_roll_number_address <<" is "<<marks[by_roll_number];
	
}	

void enter_choice_no()
{
	cout<<"Thank you";


}
