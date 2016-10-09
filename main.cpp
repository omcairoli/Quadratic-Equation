// Program: Quadratic Equation //
// Created by: Oscar Cairoli

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	// Introduction //
	cout << "Welcome to Quadratic Equation Program 1.0." << endl;
	cout << "------------------------------------------" << endl << endl;
	cout << "1. Enter three variables, A, B, & C when prompted." << endl << endl;
	cout << "2. A complex answer will return 'inf' statement" << endl << endl;
	cout << "3. Be sure to add the correct value for variable B." << endl << endl;
	
	while (true)
	{
		// Variable 1 //
		cout << "Enter variable A: " << endl << endl;
		double varA;
		cin >> varA;
	
		// Variable 2 //
		cout << "Enter variable B: " << endl << endl;
		double varB;
		cin >> varB;
	
		// Variable 3 //
		cout << "Enter variable C: " << endl << endl;
		double varC;
		cin >> varC;
	
	
		// Quadratic Equation Postive//
		double quadEqPos;
		quadEqPos = (varB + sqrt(pow(varB,2) - 4*varA*varC))/(2*varA);
	
		// Quadratic Equation Negative//
		double quadEqNeg;
		quadEqNeg = (varB - sqrt(pow(varB,2) - 4*varA*varC))/(2*varA); 
	
		// Results //
		cout << "The result by adding Variable B is " << quadEqPos << "." << endl << endl;
		cout << "The result by subtracting Variable B is " << quadEqNeg << "." << endl << endl;
	}
	

    return 0;
}
