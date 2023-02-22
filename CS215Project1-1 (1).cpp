//Course: CS215, Section 05
//Project: Project 1
//Date: 10/07/2022
//Purpose: The purpose of this program is to take a year which the user wishes to travel to and then tell them what superbowl number in roman numerals their year corresponds to.
//Author: Alessandra Lozano, ID#12523364


#include <iostream>	//for cin and cout 
#include <string>	//for string variables
#include <iomanip>	//for seet width function

//makes writing code more efficient 
using namespace std;

//Declaring constants 
const int START_SUPERBOWL = 1967;	//Year first superbowl was held
const int MIN_ROMAN = 1;	//Minimum Roman Numeral
const int MAX_ROMAN = 3999;	//Maximum ROman Numeral 
const string ONE = "I";		//The Roman Numeral Representation of 1
const string FIVE = "V";	//Of 5
const string TEN = "X";		//Of 10
const string FIFTY = "L";	//Of 50
const string HUNDRED = "C";	//Of 100
const string FIVE_HUNDRED = "D";	//Of 500 
const string THOUSAND = "M";	//Of 1000


/* 
   It returns a string form of a Roman Numeral. 
   n must be between 1 and 3999 
   @param n int: representing the number to convert into Roman Numeral 
   @return string: representing the corresponding Roman Numeral for n 
*/ 
string roman_numeral(int n)
{	

	string RomanNum;	//This is what our function will return
	int NumPiece = n - START_SUPERBOWL + 1;	//In order to reuse code without replacing all variables I just set NumPiece equal to n

	//while statement which will continue until NumPiece is less than 1
	while ( NumPiece >= 1)
	{
		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		if (NumPiece >= 1000)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += THOUSAND;
			NumPiece -= 1000;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		else if (NumPiece >= 900)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += HUNDRED + THOUSAND;
			NumPiece -= 900;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		else if (NumPiece >= 500)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += FIVE_HUNDRED;
			NumPiece -= 500;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		else if (NumPiece >= 400)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += HUNDRED + FIVE_HUNDRED;
			NumPiece -= 400;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		else if (NumPiece >= 100)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += HUNDRED;
			NumPiece -= 100;
		}
		
		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		else if (NumPiece >= 90)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += TEN + HUNDRED;
			NumPiece -= 90;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		else if (NumPiece >= 50)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += FIFTY;
			NumPiece -= 50;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		else if (NumPiece >= 40)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += TEN + FIFTY;
			NumPiece -= 40;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		else if (NumPiece >= 10)
		{
			RomanNum += TEN;
			NumPiece -= 10;
		}

		else if (NumPiece >= 9)
		{
			RomanNum += ONE + TEN;
			NumPiece -= 9;
		}
		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		else if (NumPiece >= 5)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += FIVE;
			NumPiece -= 5;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		else if (NumPiece == 4)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += ONE + FIVE;
			NumPiece -= 4;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		else if (NumPiece >= 1)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += ONE;
			NumPiece -= 1;
		}
	}

	return RomanNum;
}

//Declaring main function 
int main()
{
	string flag; //Variable to validate user input
	int SuperBowlYear;	//Holds user input for the year they want to travel to
	do
	{
		// Output statements with user directions
		cout << "\n******************************************************************************" << endl;
		cout << "* Super Bowl I took place on January 15, " << START_SUPERBOWL;
		cout << "                                *" << endl;
		cout << "* This Roman Numerals Convertor is written by Alessandra Lozano.             *" << endl;
		cout << "* If you had a time machine, which year of the Super Bowl                    *" << endl;
		cout << "* would you want to attend (1967 - 5965) ?                                   *" << endl;
		cout << "******************************************************************************" << endl;
		cout << "Please enter the year you want to attend (click Q or q to quit) : " << endl;

		cin >> SuperBowlYear; //Stores user input in variable SuperBowlYear


		//if statement to check if SuperBowlYear is invalid
		if (cin.fail())
		{
			//clearing input in order to continue work with it in loop
			cin.ignore(1000, '\n');
			cin.clear();

			//Puts input from UserNum as the input for string flag
			cin >> flag;

			//If else statement checking wether or not we want to show total or error message
			if (flag == "Q" || flag == "q")
			{
				cout << "\nBack to 2022, and have a great day!" << endl;
				break;
			}

			//when input fails but it's not q or Q
			else
			{
				//ignores input and clears previous input
				cin.ignore(1000, '\n');
				cin.clear();

				//output error message for user 
				cout << "Please use a four-digit number to represent a year (1967-5965)!" << endl;
			}


		}

		// when user input doesn't fail
		else
		{
			//ignores input and clears previous input
			cin.ignore(1000, '\n');
			cin.clear();

			//corresponding output statement for when the input doesn't fail
			cout << "The time machine will bring you to the year of " << SuperBowlYear << ":" << endl;

			//checking whether year is too small
			if (SuperBowlYear <= START_SUPERBOWL - MIN_ROMAN)
			{
				//error message for when the year inputted is too small.
				cout << "Wait!!! The year you enter is EARLIER than the first Super Bowl!" << endl;
			}

			else if (SuperBowlYear >= START_SUPERBOWL + MAX_ROMAN)
			{
				//error message for when the year inputted is too small.
				cout << "Hold on!!! The year you entered is TOO BIG for roman numerals!" << endl;
			}

			else
			{
				string RomanNumeral = roman_numeral(SuperBowlYear);
				cout << "It is SuperBowl " << RomanNumeral; //output statement to tell user what number superbowl it is
				//Calls roman numeral function and converts the SuperBowlYear inputted into a roman numeral
				cout << "\nWe will help you find out the result and other interesting information...next time :)" << endl;
			}

			
		}

	} while (flag != "Q" || flag != "q");

	//ends program
	return 0;

}

