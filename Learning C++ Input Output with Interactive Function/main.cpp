//File Creater: Paul Boyer
// pauboyer@uat.edu
// CSC215 wk 1-2
// Must have to output to the screen
#include <iostream>
// This allow me to use string features
#include<string>
// keeps me from typing std:: on multiple commands
using namespace std;
// This is the entry point to C++
// The function C++ starts with is always called main
int main()
{
	//Display title for user
	cout << "\n\n\n\t *** WELCOME TO YOUR ADVENTURE *** \n\n";
	//Tell user what this program does
	cout << "\nYou have just traveled across the universe to the planet mars and in order to survive you will need to make the correct choices or suffer the wrath of the red planet\n";
	//Add directions for user
	cout << "\n Answers are case sensative so beware of your choices!! Most of all enjoy your adventure\n";
	// Ask user for their name
	cout << "\nWhat is your name?";
	//Creates a variable in memory to hold the players name
	string playerName;
	// This will get the players name
	getline(cin, playerName);
	// Welcome will display playername that is stored in memory
	cout << "\nWelcome" + playerName + " to your Adventure!\n\n";
	//Scenario 1 - Keep your character alive by finding water nearby. Beware of the dangers that are lurking around on the red planet.
	cout << "\nYou land on mars and you must find water since your water maker broke during recovery";
	cout << "\nTo the west you hear a growlong sound.";
	cout << "\nTo the east you hear water spalshing on a beach.";
	//Creates a variable that will display the results of the players choice.
	string playersChoice;
	cout << "\nWhich way do you want to go? (W/E)";
	//Retrieves the players choice and console displays the results based on if, else if, or else.
	getline(cin, playersChoice);
	//If is an expression statement that when true is executed. Otherwise the statement is skipped and the program branches to the 
	//statement after the if suite.
	if (playersChoice == "W")
	{
		cout << "\nYou come upon an angry martian bear and become injured!";
		string playersChoice;
		cout << "\nDo you want to return to your ship for medical supplies? (Y/N)";
		getline(cin, playersChoice);
		if (playersChoice == "Y")
		{
			cout << "\nYou will live, but still need to find water";
			string playersChoice;

		}
		//else if is two statements. The else clause can be added to an if statement to provide code that will only executed if the tested
		//expression is false.
		else if (playersChoice == "N")
		{
			cout << "\nYour wounds become infected and you do not survive";
		}
		// the else clause provides a statement for the program to branch to if the expression is false.
		else
		{
			cout << "\nYou have not made a clear choice. Try again";
			string playersChoice;
			cout << "\nDo you want to return to your ship for medical supplies? (Y/N)";
			getline(cin, playersChoice);
			if (playersChoice == "Y")
			{
				cout << "\nYou will live, but still need to find water";
				string(playersChoice);
				cout << "\nDo you want to go to the east towards the lake? (Y/N)";
				getline(cin, playersChoice);
				if (playersChoice == "Y")
				{
					cout << "\nYou have found water and will survive.";
				}
				else if (playersChoice == "N")
				{
					cout << "\nYou did not get water and did not survive!";
				}
				else
				{
					cout << "You did not make a clear choice. Try again.";
					if (playersChoice == "Y")
					{
						cout << "\nYou have found water and will survive.";
					}
					else if (playersChoice == "N")
					{
						cout << "\nYou did not get water and did not survive!";
					}
				}
			}
			else if (playersChoice == "N")
			{
				cout << "\nYour wounds become infected and you do not survive";
			}
		}
	}
	else if (playersChoice == "E")
	{
		cout << "\nYou find a large lake and plenty of fresh water, you have survived.\n";
	}
	else
	{
		cout << "\nYou did not make a clear choice or take action, you are walking in circles. Try again\n";
		string playersChoice;
		cout << "\nWhich way do you want to go? (W/E)";
		getline(cin, playersChoice);
		if (playersChoice == "W")
		{
			cout << "\nYou come upon an angry martian bear and become injured!";
			string playersChoice;
			cout << "\nDo you want to return to your ship for medical supplies? (Y/N)";
			getline(cin, playersChoice);
			if (playersChoice == "Y")
			{
				cout << "\nYou will live, but still need to find water.";
				string(playersChoice);
				cout << "\nDo you want to go to the east towards the lake? (Y/N)";
				getline(cin, playersChoice);
				if (playersChoice == "Y")
				{
					cout << "\nYou have found water and will survive.";
				}
				else if (playersChoice == "N")
				{
					cout << "\nYou did not get water and did not survive!";
				}
				else
				{
					cout << "You did not make a clear choice. Try again.";
						if (playersChoice == "Y")
						{
							cout << "\nYou have found water and will survive.";
						}
						else if (playersChoice == "N")
						{
							cout << "\nYou did not get water and did not survive!";
						}
				}

			}
			else if (playersChoice == "N")
			{
				cout << "\nYour wounds become infected and you do not survive";
			}
			else
			{
				cout << "\nYou have not made a clear choice. Try again";
				string playersChoice;
				cout << "\nDo you want to return to your ship for medical supplies? (Y/N)";
				getline(cin, playersChoice);
				if (playersChoice == "Y")
				{
					cout << "\nYou will live, but still need to find water.";
					string playersChoice;
					cout << "\nDo you want to go east towards the lake? (Y/N)";
					getline(cin, playersChoice);
					if (playersChoice == "Y")
					{
						cout << "\nYou have found water and will survive.";
					}
					else if (playersChoice == "N")
					{
						cout << "\nYou did not get water and did not survive.";
					}
					
				}
				else if (playersChoice == "N")
				{
					cout << "\nYour wounds become infected and you do not survive";
				}
			}
		}
		else if (playersChoice == "E")
		{
			cout << "\nYou find a large lake and plenty of fresh water, you will survive.\n";
		}
	}
	//End of Scenario 1.
	cout << "\n\n\n **Congratulations!" + playerName + " You have completed the first scenario.**\n";
	//Scenario 2 - Keep your character alive by finding food. Dangers still exist so beware and make the right choices!
	cout << "\nYou have set up camp near the lake and have survived on water, but it is time to find food because your stores have run low";
	cout << "\nTo the north you see a tree.";
	cout << "\nTo the south you see an animal.";
	cout << "\nWhich way do you want to go? (N/S)";
	getline(cin, playersChoice);
	if (playersChoice == "N")
	{
		cout << "\nYou come upon a fruit bearing tree, but arent sure if its safe to eat without scanning its composition first at your ship.";
		string playersChoice;
		cout << "\nDo you want to scan the fruit first? (Y/N)";
		getline(cin, playersChoice);
		if (playersChoice == "Y")
		{
			cout << "\nYou discover the fruit is not safe to eat without washing it first.";
			cout << "\nDo you want to wash the fruit in the lake? (Y/N)";
			getline(cin, playersChoice);
			if (playersChoice == "Y")
			{
				cout << "\nYou have found enough food to sustain you! You will survive.";
			}
			else if (playersChoice == "N")
			{
				cout << "\nYou have become poisoned and need immediate medical treatment!";
				cout << "\nDo you want to use your medical supplies to heal? (Y/N)";
				getline(cin, playersChoice);
					if (playersChoice == "Y")
					{
						cout << "\nYou have healed your poisoning, but have no more medical supplies.";
					}
					else if (playersChoice == "N")
					{
						cout << "\nYou did not treat your poisoning in time and did not survive!";
					}
					else
					{
						cout << "\nYou have not made a clear choice. Try again.";
							cout << "\nDo you want to use your medical supplies to heal? (Y/N)";
						getline(cin, playersChoice);
						if (playersChoice == "Y")
						{
							cout << "\nYou have healed your poisoning, but have no more medical supplies.";
						}
						else if (playersChoice == "N")
						{
							cout << "\nYou did not treat your poisoning in time and did not survive!";
						}
					}
			}
		}
		else if (playersChoice == "N")
		{
			cout << "\nYou become poisoned and need immediate medical treatment!";
			cout << "\nDo you want to use your medical supplies to heal? (Y/N)";
			getline(cin, playersChoice);
			if (playersChoice == "Y")
			{
				cout << "\nYou have healed your poisoning, but have no more medical supplies.";
			}
			else if (playersChoice == "N")
			{
				cout << "\nYou did not treat your poisoning in time and did not survive!";
			}
			else
			{
				cout << "\nYou have not made a clear choice. Try again.";
					cout << "\nDo you want to use your medical supplies to heal? (Y/N)";
				getline(cin, playersChoice);
				if (playersChoice == "Y")
				{
					cout << "\nYou have healed your poisoning, but have no more medical supplies.";
				}
				else if (playersChoice == "N")
				{
					cout << "\nYou did not treat your poisoning in time and did not survive!";
				}
			}
		}
		else
		{
			cout << "\nYou have not made a clear choice. Try again.";
			string playersChoice;
			cout << "\nDo you want to scan the fruit first? (Y/N)";
			getline(cin, playersChoice);

			if (playersChoice == "Y")
			{
				cout << "\nYou discover the fruit is not safe to eat without it first.";
			}
			else if (playersChoice == "N")
			{
				cout << "\nYou become poisoned and need immediate medical treatment!";
				cout << "\nDo you want to use your medical supplies to heal? (Y/N)";
				getline(cin, playersChoice);
				if (playersChoice == "Y")
				{
					cout << "\nYou have healed your poisoning, but have no more medical supplies.";
				}
				else if (playersChoice == "N")
				{
					cout << "\nYou did not treat your poisoning in time and did not survive!";
				}
				else
				{
					cout << "\nYou have not made a clear choice. Try again.";
						cout << "\nDo you want to use your medical supplies to heal? (Y/N)";
					getline(cin, playersChoice);
					if (playersChoice == "Y")
					{
						cout << "\nYou have healed your poisoning, but have no more medical supplies.";
					}
					else if (playersChoice == "N")
					{
						cout << "\nYou did not treat your poisoning in time and did not survive!";
					}
				}
			}
		}
	}
	else if (playersChoice == "S")
	{
		cout << "\nYou have encountered another martian bear, but dont have any weapons.";
		string playersChoice;
		cout << "\nDo you want to approach? (Y/N)";
		getline(cin, playersChoice);
		if (playersChoice == "Y")
		{
			cout << "\nYou become severly injured and do not survive.";
		}
		else if (playersChoice == "N")
		{
			cout << "\nYou avoid becoming injured and survive.";
		}
		else
		{
			cout << "\nYou have not made a clear choice. Try again.";
			string playersChoice;
			cout << "\nDo you want to approach? (Y/N)";
			getline(cin, playersChoice);
				if (playersChoice == "Y") 
				{
					cout << "\nYou become severly injured and do not survive.";
				}
				else if (playersChoice == "N")
				{
					cout << "\nYou avoid becoming injured and survive.";
				}
		}
	}
	else
	{
	cout << "\nYou have not made a clear choice. Try again.";
	cout << "\nWhich way do you want to go? (N/S)";
	getline(cin, playersChoice);
	if (playersChoice == "N")
	{
		cout << "\nYou come upon a fruit bearing tree, but arent sure if its safe to eat without scanning its composition first at your ship.";
		string playersChoice;
		cout << "\nDo you want to scan the fruit first? (Y/N)";
		getline(cin, playersChoice);
		if (playersChoice == "Y")
		{
			cout << "\nYou discover the fruit is not safe to eat without washing it first.";
			cout << "\nDo you want to wash the fruit in the lake? (Y/N)";
			getline(cin, playersChoice);
			if (playersChoice == "Y")
			{
				cout << "\nYou have found enough food to sustain you! You will survive.";
			}
			else if (playersChoice == "N")
			{
				cout << "\nYou have become poisoned and need immediate medical treatment!";
				cout << "\nDo you want to use your medical supplies to heal? (Y/N)";
				getline(cin, playersChoice);
				if (playersChoice == "Y")
				{
					cout << "\nYou have healed your poisoning, but have no more medical supplies.";
				}
				else if (playersChoice == "N")
				{
					cout << "\nYou did not treat your poisoning in time and did not survive!";
				}
				else
				{
					cout << "\nYou have not made a clear choice. Try again.";
					cout << "\nDo you want to use your medical supplies to heal? (Y/N)";
					getline(cin, playersChoice);
					if (playersChoice == "Y")
					{
						cout << "\nYou have healed your poisoning, but have no more medical supplies.";
					}
					else if (playersChoice == "N")
					{
						cout << "\nYou did not treat your poisoning in time and did not survive!";
					}
				}
			}
		}
		else if (playersChoice == "N")
		{
			cout << "\nYou become poisoned and need immediate medical treatment!";
			cout << "\nDo you want to use your medical supplies to heal? (Y/N)";
			getline(cin, playersChoice);
			if (playersChoice == "Y")
			{
				cout << "\nYou have healed your poisoning, but have no more medical supplies.";
			}
			else if (playersChoice == "N")
			{
				cout << "\nYou did not treat your poisoning in time and did not survive!";
			}
			else
			{
				cout << "\nYou have not made a clear choice. Try again.";
				cout << "\nDo you want to use your medical supplies to heal? (Y/N)";
				getline(cin, playersChoice);
				if (playersChoice == "Y")
				{
					cout << "\nYou have healed your poisoning, but have no more medical supplies.";
				}
				else if (playersChoice == "N")
				{
					cout << "\nYou did not treat your poisoning in time and did not survive!";
				}
			}
		}
		else
		{
			cout << "\nYou have not made a clear choice. Try again.";
			string playersChoice;
			cout << "\nDo you want to scan the fruit first? (Y/N)";
			getline(cin, playersChoice);

			if (playersChoice == "Y")
			{
				cout << "\nYou discover the fruit is not safe to eat without it first.";
			}
			else if (playersChoice == "N")
			{
				cout << "\nYou become poisoned and need immediate medical treatment!";
				cout << "\nDo you want to use your medical supplies to heal? (Y/N)";
				getline(cin, playersChoice);
				if (playersChoice == "Y")
				{
					cout << "\nYou have healed your poisoning, but have no more medical supplies.";
				}
				else if (playersChoice == "N")
				{
					cout << "\nYou did not treat your poisoning in time and did not survive!";
				}
				else
				{
					cout << "\nYou have not made a clear choice. Try again.";
					cout << "\nDo you want to use your medical supplies to heal? (Y/N)";
					getline(cin, playersChoice);
					if (playersChoice == "Y")
					{
						cout << "\nYou have healed your poisoning, but have no more medical supplies.";
					}
					else if (playersChoice == "N")
					{
						cout << "\nYou did not treat your poisoning in time and did not survive!";
					}
				}
			}
		}
	}
	else if (playersChoice == "S")
	{
		cout << "\nYou have encountered another martian bear, but dont have any weapons.";
		string playersChoice;
		cout << "\nDo you want to approach? (Y/N)";
		getline(cin, playersChoice);
		if (playersChoice == "Y")
		{
			cout << "\nYou become severly injured and do not survive.";
		}
		else if (playersChoice == "N")
		{
			cout << "\nYou avoid becoming injured and survive.";
		}
		else
		{
			cout << "\nYou have not made a clear choice. Try again.";
			string playersChoice;
			cout << "\nDo you want to approach? (Y/N)";
			getline(cin, playersChoice);
			if (playersChoice == "Y")
			{
				cout << "\nYou become severly injured and do not survive.";
			}
			else if (playersChoice == "N")
			{
				cout << "\nYou avoid becoming injured and survive.";
			}
		}
	}
	}
	//End of Scenario 2.
	cout << "\n\n\n **Congratulations!" + playerName + " You have completed the second scenario.**\n";
	cout << "\nEnd of Program\n\n\n" << endl;

	return 0;

}