#include <iostream>
using namespace std;

int main() {
	//input weight and hight
	double w, h;
	cout << "Enter weight (kg) = ";
	cin >> w;
	cout << "Enter hight (m) = ";
	cin >> h;

	//process
	double bmi = w / (h * h);
	cout << "Your BMI is " << bmi;

	if (bmi < 18.5)
	{
		cout << " => Underweight";
	}
	else if (bmi >= 18.5 && bmi <= 24.9)
	{
		cout << " => Normal";
	}
	else if (bmi >= 25.0 && bmi <= 29.9)
	{
		cout << " => Overweight";
	}
	else
		cout << " => Suffering from Obesity";

	cout << endl;

	int ch = getchar();
	return 0;
}