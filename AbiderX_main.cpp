/*
	Moises Cardona
	UAT
	08/13/2021

	A B I D E R  X - An interactive story with functions, pointers AND [Header and Source Code Files]
*/

#include "AbiderX.h" //Includes header files
#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;


using namespace std;



//Prototype to tell the actual story
void tellStory(string* pPlayerName, string* pPlayerGender, int* pPlayerAge, string* pColorMan, string* pColorManBio, string* pPlayerWeapon, string* pPlayerVehicle);

//All other functios are called on main
int main()
{
	string name;
	string title;
	int age;
	string colorFoe;
	string colorBio;
	string weapon;
	string vehicle;


	intro();									//Call for the intro of the story
	askText(&name, &age, &weapon, &vehicle);	//Call for player's name, age, weapon, and vehicle inputs
	askGender(&title);							//Call for gender of the player
	favColor(&colorFoe, &colorBio);				//Call for player's favorite color

	//Call to output the actual story
	tellStory(&name, &title, &age, &colorFoe, &colorBio, &weapon, &vehicle);

	return 0;
}
