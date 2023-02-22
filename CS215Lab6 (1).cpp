/*course: CS215 - Section 05
 *Project: Lab 6 (As part of Project 1)
 *Purpose: Represent the year of Super Bowl in Roman Numerals
 *         The first Super Bowl was hold in 1967 (at Los Angeles Memorial Coliseum)
 *         This program displays the Super Bowls in a centenary, from 2000 to 2099.
 *Author: Alessandra Lozano
 */
#include <iostream>
#include <string>

using namespace std;

//if you want to define other functions, you can!
//you should declare the function signature here,
//then define the function later...


//Returns a string form of a Roman Numeral.
//(n must be between 1 and 3999)
string roman_numeral(int n);


int main()
{
	// The first Super Bowl was hold in 1967 (at Los Angeles Memorial Coliseum) 
    const int START_SUPERBOWL = 1967;      

	// This program displays Super Bowl starting in year 2000
	const int START = 2000;     

	// This program displays Super Bowl ending in year 2099
    const int END = 2099;        

    // define the correct range for Roman Numerals: [MIN_ROMAN, MAX_ROMAN]
    const int MIN_ROMAN = 1;
    const int MAX_ROMAN = 3999;

    // The last Super Bowl which can be represented by Roman Numerals would be: START_SUPERBOWL + MAX_ROMAN - 1;
	 // Layout the years in a group of 10
    const int GROUP = 10;                 

    // display the first 100 years of Super Bowl, starting at 1967
    cout << endl << "\t\t\tSuper Bowl Records" << endl;
    cout << "The first Super Bowl was held at Los Angeles Memorial Coliseum on January 15, " << START_SUPERBOWL << endl;
    cout << "\tYear\t\tSuper Bowl" << endl;

    for (int i = START; i <= END; i++)
    {
        int year = i - START_SUPERBOWL + 1;
        if (i % GROUP == 0)
            cout << endl << "************************************" << endl << endl;
        cout << "\t" << i << "\t--->\t" << roman_numeral(year) << endl;
    }

    return 0;
}



/*
   Returns a string form of a Roman numeral.
   n must be between 1 and 3999
   @param n the number to convert into Roman Numeral
   @return string representing the corresponding Roman Numeral for n
*/
string roman_numeral(int n)
{	
    //string array which stores the decimal systems corresponding roman numerals 
    string str_romans[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    
    //integer array which stores the value of each roman numerals corresponding decimal value
    int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };

    //delaring empty string  result 
    string result = "";

    //iterating over string and integers array in order to output the corresponding roman numeral to each year
    for (int i = 0; i < 13; ++i)
    {
        while (n - values[i] >= 0)
        {
            result += str_romans[i];
            n -= values[i];
        }
    }

    return result;
}