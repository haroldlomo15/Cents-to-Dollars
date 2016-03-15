#include <iostream>	//includes input/ouput library
#include <string>	// includes string library 
using namespace std;

void heading()	// declaring heading
{
	cout << "******************************************************\n";
	cout << "Harold Lomotey\n"
		"@02732375\n"
		"SYCS-135 Computer Science I\n"
		"September 21, 2015\n"
		"Assignment 4, Problem 2\n"
		"*****************************************************\n";
}

int dollars_calc(int amount) //declare the value returning function for the dollar
{
	int dollar;
	dollar = amount / 100; //breaks the amount into the dollar
	return dollar; //returns the dollar valu
}
int cents_calc(int amount)	//declare the value returning function for cents
{
	int cents;
	cents = amount % 100;	//breaks the amount into cents
	return cents;	//returns the cents value
}

int main()	//The main function
{
	heading();	//calls the heading function
	int amount;
	cout << "Enter the number of pennies that you have? ";	//displays for the user input amount of pennies
	cin >> amount;	//stores the input into amount
	cout << "You have this much money:$" << dollars_calc(amount) << "." << cents_calc(amount); //displays the result 

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.get();

}

//******************************************************
//Harold Lomotey
//@02732375
//SYCS - 135 Computer Science I
//September 21, 2015
//Assignment 4, Problem 2
//*****************************************************
//Enter the number of pennies that you have ? 789
//You have this much money : $7.89