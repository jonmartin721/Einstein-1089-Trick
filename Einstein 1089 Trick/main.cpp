// Einstein 1089 Trick.cpp : Defines the entry point for the console application.
//

//All credit for the idea and documents given to the material at 
//http://www.cse.msu.edu/~cse231/PracticeOfComputingUsingPython/

#include "stdafx.h"
#include <iostream>


int main()
{

	//initialize variables
	int initialNumber, reversedNumber, diffNumber, diffNumberReversed, diffAndReverse;
	int firstDigit, secondDigit, thirdDigit;


	//ask the user for a number
	std::cout << "Einstein took great delight in baffling friends with the trick about to be shown to you.";
	std::cout << "\n\nHow it works:\nFirst we ask for a 3-digit number, but the first and last digits must be different by at least 2.";
	std::cout << "\n\n1. Number is reversed.";
	std::cout << "\n2. The absolute value of the difference between the reversed number and original number is taken.";
	std::cout << "\n3. The difference number is reversed.";
	std::cout << "\n4. The difference number and its reverse are added. The result is always 1089!";
	
	std::cout << "\n\nNumber?: ";

	std::cin >> initialNumber;
	std::cin.ignore();

	//display the initial number
	std::cout << "\n\n0. You entered: " << initialNumber;

	//process the initialNumber to get the reverse
	firstDigit = initialNumber / 100;
	thirdDigit = initialNumber % 10;
	secondDigit = initialNumber % 100;
	secondDigit -= thirdDigit;
	secondDigit /= 10;

	//form the reversed number
	reversedNumber = (thirdDigit * 100 + secondDigit * 10 + firstDigit);

	//display the reversed number
	std::cout << "\n1. Reversed number is: " << reversedNumber;

	//form the difference number
	diffNumber = abs(initialNumber - reversedNumber);

	//display the difference number
	std::cout << "\n2. Difference is: " << initialNumber << " - " << reversedNumber << " = " << diffNumber;

	//process the diffNumber to get the diffNumberReversed
	firstDigit = diffNumber / 100;
	thirdDigit = diffNumber % 10;
	secondDigit = diffNumber % 100;
	secondDigit -= thirdDigit;
	secondDigit /= 10;

	//form the diffNumberReversed
	diffNumberReversed = (thirdDigit * 100 + secondDigit * 10 + firstDigit);

	//display the diff reversed number
	std::cout << "\n3. Difference number reversed is: " << diffNumberReversed;

	//form the 1089
	diffAndReverse = diffNumber + diffNumberReversed;

	//display the 1089
	std::cout << "\n4. Result is: " << diffNumber << " + " << diffNumberReversed << " = " << diffAndReverse;

	std::cout << "\n\nAs promised, result is 1089!\n";
	std::cin.get(); //pause





    return 0;
}

