#include<iostream>
using namespace std;

int number_of_students, avg;
int marks[0];
int max1, max2, sum = 0;

void marks_storage(int number_of_students);
void show_me_marks(int number_of_students);
int average_marks(int number_of_students);
int highest_marks(int number_of_students);

int main() {

	
	cout << "Enter total no. of students: ";
	cin >> number_of_students;

	max1 = marks[0];

	marks_storage(number_of_students);

	show_me_marks(number_of_students);

	avg = average_marks(number_of_students);

	max2 = highest_marks(number_of_students);

	cout << "Average marks are: " << avg << endl;


	
	cout << "Highest marks obtained is: " << max2 << endl;

	return 0;
}

void marks_storage(int number_of_students) {

	for (int i = 0; i<number_of_students; i++)
	{
		cout << "Enter the marks of student " << i + 1 << " :";
		cin >> marks[i];
	}
}

void show_me_marks(int number_of_students) {

	for (int i = 0; i<number_of_students; i++)
	{
		cout << "Marks of student " << i + 1 << " is " << marks[i] << endl;
	}

}

int average_marks(int number_of_students) {

	for (int i = 0; i<number_of_students; i++)
	{
		sum = sum + marks[i];
	}


	sum = sum / number_of_students;

	return sum;
}


int highest_marks(int number_of_students) {

	for (int i = 1; i<number_of_students; i++)
	{
		if (max1<marks[i])
		{
			max1 = marks[i];
		}
	}
	return max1;
}