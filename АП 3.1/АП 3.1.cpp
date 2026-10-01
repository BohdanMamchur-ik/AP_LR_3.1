// АП 3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    double A;
	double B;   
    cout << "x = "; cin >> x;
   
    if (x <= 0) 
        B = log(cos(x)) + pow(x, 5);
    else if (x > 0 && x <= 3)
        B = 1.0 / tan((1 + log(x)) / 3);
    else (x > 3);
        B = 12 * x - pow(x, 8);

        A = 2 + 6 * x + B;
        cout << A;

		return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
