//Course: CS215, Section 05
//Project: Lab Assignment 3
//Date: 09/07/2022
//Purpose:The purpose of this program is to convert integers inputted into roman numerals
//Author: Alessandra Lozano, ID#12523364

//Includes input and output statements
#include <iostream>
//Includes string variables
#include <string>

//declaring standard namespace in order to code 
//more efficiently
using namespace std;

const string One = "I";
const string Five = "V";
const string Ten = "X";
const string Fifty = "L";
const string Hundred = "C";

//declaring main function
int main()
{
	//declaring and initializing variables
	int UsersNum = 0;
	int NumPiece= 0 ;
	string RomanNum = "" ;
	
	//Prompting user input
	cout << "Welcome to CS215 Roman Numeral Converter" << endl;
	cout << "Please input the number you want to convert to Roman Numerals (At the range of [1,99]): ";
	
	//extracting user input and storing it in variable UserNum
	cin >> UsersNum;

	//While statement which verifies whether or not the user inputted an accepted value
	while (UsersNum < 1 || UsersNum > 99)
	{	
		//Indicating to user the number inputted was bad
		cout << "Your input is not in the correct range" << endl;

		//Prompting user input
		cout << "Please input the number you want to convert to Roman Numerals (At the range of [1,99]): ";

		//extracting user input and storing it in variable UserNum
		cin >> UsersNum;
	}

	//storing value of users input into NumPiece in order to manipulate without changing original value
	NumPiece = UsersNum;

	//while statement which will continue until NumPiece is less than 1
	while (NumPiece >= 1)
	{	
		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		if (NumPiece >= 90)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += Ten + Hundred;
			NumPiece -= 90;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		if (NumPiece >= 50)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += Fifty;
			NumPiece -= 50;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		if (NumPiece >= 40)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += Ten + Fifty;
			NumPiece -= 40;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		if (NumPiece >= 10)
		{
			RomanNum += Ten;
			NumPiece -= 10;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		if (NumPiece >= 5)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += Five;
			NumPiece -= 5;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		if (NumPiece == 4)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += One + Five;
			NumPiece -= 4;
		}

		//if statement that manipulates Users input in order to convert into roman numeral
		//so long as NumPiece fits parameters
		if (NumPiece >= 1)
		{
			//Operation that creates the string that will be outputted 
			RomanNum += One;
			NumPiece -= 1;
		}
	}

	//output which tells the user what their input is as well as its corresponding roman numeral
	cout << "The number you input is: " << UsersNum << endl;
	cout << "Its Roman Numeral is: " << RomanNum;

	//ends program
	return 0;
}
