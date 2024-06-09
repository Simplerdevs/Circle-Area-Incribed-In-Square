
					/* Program To calculate Circle Area Inscribed in a Square then print it on screen */
						
#include <iostream>
#include <cmath>
using namespace std;




int main()

{
 
	double side_length;
	cout << "Please enter The side length ! " << endl;
	cin >> side_length;


	double PI = 3.14;
	double Area = PI * (side_length * side_length) / 4;


	cout << "The area of the inscribed circle is: " << Area << endl;


	return 0;

	


	// Created by @ilyes_Trabelsi
}

