/*
Name: DERRICK DEMERS
Date: 2/17/2024
CGPA Calculator - The purpose of this program is to calculate the grade point average for a user on a 4.0 scale
		When given the toal grade points accumulated and from grades earned in total.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int totalGrade, obtainGrade;
	float percentage = 0.0, gpa;

	cout << "Enter your total grade: ";
	cin >> totalGrade;

	cout << "Enter your obtained grade: ";
	cin >> obtainGrade;

	if (obtainGrade <= totalGrade)
	{
		percentage = 100 * float(obtainGrade) / float(totalGrade);
	}
	else 
	{
		cout << "Invalid grade entered";
	}

	if (percentage > 0)
	{
		if ((percentage >= 90) && (percentage <= 100))
		{
			gpa = 4.00;
			cout << "Your GPA is: " <<gpa<< endl;
			cout << "Your grade ranking is an \"A\" \n";
			cout << "Your grade percentage is: " << percentage << " out of 100. \n";
		}
		else if ((percentage>=80) && (percentage<=89.99))
		{
			gpa = (percentage * 3.00)/80;
			cout << "Your GPA is: " << setprecision(2) << gpa << endl;
			cout << "Your grade ranking is a \"B\" \n";
			cout << "Your grade percentage is: " << setprecision(2) << percentage << " out of 100. \n";
		}
		else if ((percentage >= 70) && (percentage <= 79.99))
		{
			gpa = (percentage * 2.00)/70;
			cout << "Your GPA is: " << setprecision(2) << gpa << endl;
			cout << "Your grade ranking is a \"C\" \n";
			cout << "Your grade percentage is: " << setprecision(2) << percentage << " out of 100. \n";
			cout << "You are at risk of failing, please make an effort to boost your grade... \n";
		}
		else
		{
			gpa = (percentage * 1.00)/60;
			cout << "Your GPA is: " << gpa << endl;
			cout << "Your grade ranking is a \"F\" \n";
			cout << "Your grade percentage is: " << setprecision(2)<< percentage << " out of 100. \n";
			cout << "You are currently failing, make an effort to get your grade up. \n";
		}
	}

	return 0;
}