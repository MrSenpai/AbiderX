
#include "AbiderX.h"	//Includes header files
#include <iostream>


//Definitions go here
//Definition to get the player's text inputs
void askText(string* pName, int* pAge, string* pWeapon, string* pVehicle)
{
	string askName = *pName;
	int askAge = *pAge;
	string askWeapon = *pWeapon;
	string askVehicle = *pVehicle;

	cout << "Please enter your name: " << endl;
	cin >> askName;

	cout << "How old are you in years?: " << endl;
	cin >> askAge;

	cout << "What is your weapon of choice?: " << endl;
	cin >> askWeapon;

	cout << "What is your vehicle of choice?: " << endl;
	cin >> askVehicle;

	//Stores player's inputs to their respective pointers
	*pName = askName;
	*pAge = askAge;
	*pWeapon = askWeapon;
	*pVehicle = askVehicle;
}

//Definition to get the player's preferred gender by title through four choices
void askGender(string* pGender)
{
	string playerTitle = *pGender;
	int selectGender;


	//Select a gender specific title as a numerical value and assign gender as long as the selection is valid
	do
	{
		cout << "\nHow we may refer you as? ";
		cout << "\n(Please select an integer)" << endl;
		cout << "1. Mr. \n2. Ms. \n3. Mrs. \n4. Mx. " << endl;
		cin >> selectGender;
	} while (selectGender > 4 || selectGender < 1); //Makes sure player's input is valid

	//Store the title for player as a return value according to selected gender
	if (selectGender == 1)
	{
		playerTitle = "Mr.";
	}
	else if (selectGender == 2)
	{
		playerTitle = "Ms.";
	}
	else if (selectGender == 3)
	{
		playerTitle = "Mrs.";
	}
	else if (selectGender == 4)
	{
		playerTitle = "Mx.";
	}

	//Stores player's input to its pointers
	*pGender = playerTitle;
}


//Definition to get the player's favorite (or selected) color
	//The story slightly changes accornding to which color is selected
void favColor(string* pColorFoe, string* pColorBio)
{
	string favColor = *pColorFoe;
	string infoColor = *pColorBio;
	int selectColor;

	//Choice of 6 colors to be selected in a list through a numerical input
	do
	{
		cout << "\nChoose one of the following colors by typing its respective number: " << endl;
		cout << "1. Red \n2. Orange \n3. Yellow \n4. Green \n5. Blue \n6. Purple \n";
		cin >> selectColor;
	} while (selectColor > 6 || selectColor < 1); //Makes sure player inputs the right number

	//Selects the antagonist and its brief description according to selected color
	if (selectColor == 1)
	{
		favColor = "Mr. Red";
		infoColor = "a man as wild and passionate as fire. ";
	}
	else if (selectColor == 2)
	{
		favColor = "Mr. Orange";
		infoColor = "the man with the radiant charisma. ";
	}
	else if (selectColor == 3)
	{
		favColor = "Mr. Yellow";
		infoColor = "the mellow man among the dahlias. ";
	}
	else if (selectColor == 4)
	{
		favColor = "Mr. Green";
		infoColor = "the harmonious assassin. ";
	}
	else if (selectColor == 5)
	{
		favColor = "Mr. Blue";
		infoColor = "the calculating observer. ";
	}
	else if (selectColor == 6)
	{
		favColor = "little Purple";
		infoColor = "the mysterious child after the horizon. ";
	}

	//Stores player's inputs to their respective pointers
	*pColorFoe = favColor;
	*pColorBio = infoColor;

}



//Definition that cointains the actual story of the game
void tellStory(string* pPlayerName, string* pPlayerGender, int* pPlayerAge, string* pColorMan, string* pColorManBio, string* pPlayerWeapon, string* pPlayerVehicle)
{
	string playerName = *pPlayerName;
	string playerTitle = *pPlayerGender;
	int playerAge = *pPlayerAge;
	string assassinColor = *pColorMan;
	string assassinBio = *pColorManBio;
	string playerWeapon = *pPlayerWeapon;
	string playerVehicle = *pPlayerVehicle;

	cout << "\n\nHere's the plot...\n" << endl;
	cout << "\n" << playerTitle << " " << playerName << ", you feel an imbalance throughout the confines of this REALM/VOID." << endl;
	cout << "Walking " << playerAge << " YEARS/" << playerAge * 365 << " DAYS on the dark side of the world, YOU/THEY keep THEM/YOU in check, " << endl;
	cout << "by WILL/AGREEMENT of Light and Darkness. " << endl;

	cout << "\nAs a PROTECTOR/ENFORCER, you are APPOINTED/BORN to CONTROL/SUPPRESS the imbalances of the Ligth." << endl;
	cout << "But the 7 MANIFESTATIONS/ABERRATIONS of the Light, the Council of Colors, has taken something from you a while ago." << endl;
	cout << "Now you will take their heads." << endl;

	cout << "\nYou grab your trusty " << playerWeapon << " and ride your " << playerVehicle << " toward the horizon, " << "prepared to meet your first target, " << endl;
	cout << assassinColor << ", " << assassinBio << endl;

	cout << "\nAs directed by your DIRECTIVES/PURPOSE, you're CONTRACTED/DESTINED to MARGINALIZE/KILL " << assassinColor << ", for it is your duty to " << endl;
	cout << "PROSECUTE/RETALIATE_AGAINST the 7, for you are a SEEKER/RECLAIMER, a KEEPER/EXECUTOR... " << endl;

	cout << "\n\nan  A B I D E R. \n" << endl;

	//Stores player's inputs to their respective pointers
	*pPlayerName = playerName;
	*pPlayerGender = playerTitle;
	*pPlayerAge = playerAge;
	*pColorMan = assassinColor;
	*pColorManBio = assassinBio;
	*pPlayerWeapon = playerWeapon;
	*pPlayerVehicle = playerVehicle;
}

//Definition that contains an introductory statement
void intro()
{
	cout << "\nEverything has an opposite, an equivalent... a relationship to something. Balance brings normality among things, " << endl;
	cout << "but the very definition of normality is subject to change over time." << endl;

	cout << "\nWelcome  A B I D E R ,  please insert the requested data asked below to proceed with your mission." << endl;
}
