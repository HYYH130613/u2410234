// U2410234 Sofina Adelina
// Purpose: Laboratory Assignment 2 

//Excercise 2
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // Task 1 Write a program that inputs three integers from the keyboard
    // and prints the sum, average, product, smallest and largest of these numbers.

    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    auto smallest = min({ n1, n2, n3 });
    auto largest = max({ n1, n2, n3 });

    cout << "Sum: " << n1 + n2 + n3 << endl;
    cout << "Average: " << (n1 + n2 + n3) / 3 << endl;
    cout << "Product: " << n1 * n2 * n3 << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;

    //Task 2 Write a program that calculates the squares and cubes of the integers 
    //from 0 to 10. Use tabs to print the following neatly formatted table of values

    cout << ("integer\tsquare\tcube") << endl;
    cout << 0 << "\t" << 0 * 0 << "\t" << 0 * 0 * 0 << endl;
    cout << 1 << "\t" << 1 * 1 << "\t" << 1 * 1 * 1 << endl;
    cout << 2 << "\t" << 2 * 2 << "\t" << 2 * 2 * 2 << endl;
    cout << 3 << "\t" << 3 * 3 << "\t" << 3 * 3 * 3 << endl;
    cout << 4 << "\t" << 4 * 4 << "\t" << 4 * 4 * 4 << endl;
    cout << 5 << "\t" << 5 * 5 << "\t" << 5 * 5 * 5 << endl;
    cout << 6 << "\t" << 6 * 6 << "\t" << 6 * 6 * 6 << endl;
    cout << 7 << "\t" << 7 * 7 << "\t" << 7 * 7 * 7 << endl;
    cout << 8 << "\t" << 8 * 8 << "\t" << 8 * 8 * 8 << endl;
    cout << 9 << "\t" << 9 * 9 << "\t" << 9 * 9 * 9 << endl;
    cout << 10 << "\t" << 10 * 10 << "\t" << 10 * 10 * 10 << endl;


    //Task 3 Create an application that calculates your daily driving cost, 
    //so that you can estimate how much money could be saved by car pooling. 
    //The application should input the following information and display the user’s cost per day of driving to work: 
    // a) Total km driven per day. 
    // b) Cost per liter of gasoline.
    // c) Average km per liter.
    // d) Total cost per day.

    int km, cost, average;

    cout << ("Total km driven per day: ");
    cin >> km;
    cout << ("Cost per liter of gasoline: ");
    cin >> cost;
    cout << ("Average km per liter: ");
    cin >> average;
    auto total_cost = (km / average) * cost;
    cout << ("Total cost per day: ") << total_cost << endl;

    return 0;
}