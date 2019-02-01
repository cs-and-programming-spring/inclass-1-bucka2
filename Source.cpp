


/***********************************************
* Name: Alex Buck
* Email: bucka2@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	float radius, area, circumference;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in radius to compute area of circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute area to PI*radius*radius
	area = PI * radius *radius;

	//Display the area 
	cout << " The area is = " << area << "\n\n";
	cout << "Program has ended" << endl;

	system("pause");

	/**
	* A program that converts distance in miles to
	* distance in kilometers
	*
	* @author Alex Buck
	*/

	double miles, kilometers, meters;
		
		cout << "\n\nThis program converts miles to kilometers\n";

		cout << "Please input the number of miles: ";
		cin >> miles;

		kilometers = miles * 1.6;
		meters = kilometers * 1000;

		cout << "The number of kilometers is: " << kilometers << "\n\n";
		cout << "The distance in meters is: " << meters << "\n";
		cout << "The distance in centimeters is: " << meters * 100 << "\n";
		cout << "The distance in millimeters is: " << meters * 1000 << "\n";
		cout << "Program has ended" << endl;

		system("pause");

	/** A program that calculates the circumference of a circle
	*
	* @author Alex Buck
	*/

	const double pi = 3.14;

	double diameter, circ;
		cout << "\n\nThis program converts the circumference of a circle\n";

		cout << "Please input the diameter of the circle: ";

		cin >> diameter;

		circ = diameter * pi;

		cout << "The circumference of the circle is: " << circ << "\n\n";
		cout << "Program has ended" << endl;

		system("pause");



		/** 
		* A program that converts degrees in celsius to degrees in farenheit.
		*
		*@author Alex Buck
		*@email bucka2@students.rowan.edu
		*/

		int degF, degC;

		cout << "\n\nThis program converts temperatures in celsius to degrees in farenheit" << endl;
		cout << "Please input the degrees in celsius:" << endl;
		
		cin >> degC;
		degF = (9 / 5) * degC + 32;

		cout << "Degrees in celsius:" << degC << endl;
		cout << "Degrees in Farenheit: " << degF << endl;
		
		cout << "This program has ended" << endl;
		system("pause");

		/**
 * A program that, given an age in years, will compute the time to months, days, hours, and seconds.
 *
 * @author Alex Buck
 * @email bucka2@students.rowan.edu
 */

		int years, months, days, hours, seconds;

		cout << "This program converts ages in years to ages in terms of months, days, hours and seconds" << endl;
		cout << "Please input your age in years: ";

		cin >> years;
		months = years * 12;
		days = years * 365;
		hours = days * 24;
		seconds = hours * 60;

		cout << "\nYour age in years: " << years << endl;
		cout << "Your age in months: " << months << endl;
		cout << "Your age in days: " << days << endl;
		cout << "Your age in hours: " << hours << endl;
		cout << "Your age in seconds: " << seconds << endl;

		cout << "This program has ended" << endl;
		system("pause");

		/**
		  * A program that prints out the block letter A
		  *
		  * @author Alex Buck
		  * @email bucka2@students.rowan.edu
		  */

		cout << "The letter a will now be printed with *" << endl;
		cout << "  **  " << endl;
		cout << " *  * " << endl;
		cout << "*    *" << endl;
		cout << "******" << endl;
		cout << "*    *" << endl;
		cout << "*    *" << endl;

		system("pause");

		return 0;
}
	
