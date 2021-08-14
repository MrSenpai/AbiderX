#pragma once

#include <string>
using namespace std;

//Prototypes go here
void intro();	//Prototype for the intro of story
void askText(string* pName, int* pAge, string* pWeapon, string* pVehicle);	//Prototype for all text inputs from player
void askGender(string* pGender);		//Prototype for the selection of player's gender according to preferred title
void favColor(string* pColorFoe, string* pColorBio);		//Prototype to ask for player's favorite color


