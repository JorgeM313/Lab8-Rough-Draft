//Jorge Martinez
//CPSC 121
//12/7/2018

#include<iostream>
#include<string>
#include<vector>
#include "Gladiator.h"
#include "Gladiator.cpp"
#include<stdlib.h>

using namespace std;

int main()
{
vector<Gladiator> RedTeam;
vector<GLadiator> BlueTeam;
unsigned int seed = 0;
seed = time(0);
srand(seed);

int menuchoice = 0;
for(i=0; i < 5; i++)
{

	Gladiator G;
	RedTeam.push_back(G);

}

for (i=0; i < 5; i++)
{

	Gladiator G;
	BlueTeam.push_back(G);

}

do
{
     cout << "Red Team has " << RedTeam.size() << "people alive." << endl;
     cout << "Blue Team has " << BlueTeam.size() << "people alive." << endl;
     cout << "Select an option" << endl;
     cout << "1. Take turn " << endl;
     cout << "2. Add fighter " << endl;
     cout << "3. Exit " << endl;
     cin >> menuchoice;
	
if (menuchoice == 1)
{
     int num = rand() % 2
	if (num == 0)
	{
		for(int i =0; i < RedTeam.size();i++){
			int dam = RedTeam[i].rollDamage()
			int victim = rand() % BlueTeam.size();	
			bool died = BlueTeam[victim].takeDamage(dam);
			cout << RedTeam[i].name << " attacks " << BlueTeam[victim].name << endl; 
			cout << "Current Health: ";
			cout << RedTeam[i].name << ": " << RedTeam[i].getCurHealth();
			cout << " | " << BlueTeam[victim].name << ": " << BlueTeam[victim].getCurHealth() << endl;	
			if(died == true){
				cout << "Some poor sap died\n";
				BlueTeam.erase(BlueTeam.begin()+victim);
			}
		}
	for (int i = 0; i < BlueTeam.size(); i++){

			int dam = BlueTeam[i].rollDamage()
			int victim = rand() % RedTeam.size();
			bool died = RedTeam[victim].takeDamage(dam);
			cout << BlueTeam[i].name << " attacks " << RedTeam[victim].name << endl;
			cout << "Current Health: ";
			cout << BlueTeam[i].name << ": " << BlueTeam[i].getCurHealth();
			cout << " | " << RedTeam[victim].name << ": " << RedTeam[victim].getCurHealth() << endl;
			if (died == true){
				cout << "Some poor sap died\n";
				RedTeam.erase(RedTeam.begin()+victim);	

			}

}

			
				
	}	  
	else{
	for(int i = 0; i < BlueTeam.size(); i++){

	int dam = BlueTeam[0].rolldamage()
	int victim = rand() % RedTeam.size();
	RedTeam[victim].takeDamage(dam);
	cout << BlueTeam[0].name << " attacks " << RedTeam[victim].name << endl;
	cout << "Current Health: ";
	cout << BlueTeam[0].name << ": " << BlueTeam[0].getCurHealth();
	cout << " | " << RedTeam[victim].name << ": " << RedTeam[victim].getCurHealth();


	for(int i =0; i < RedTeam.size();i++){
			int dam = RedTeam[i].rollDamage()
			int victim = rand() % BlueTeam.size();	
			bool died = BlueTeam[victim].takeDamage(dam);
			cout << RedTeam[i].name << " attacks " << BlueTeam[victim].name << endl; 
			cout << "Current Health: ";
			cout << RedTeam[i].name << ": " << RedTeam[i].getCurHealth();
			cout << " | " << BlueTeam[victim].name << ": " << BlueTeam[victim].getCurHealth() << endl;	
			if(died == true){
				cout << "Some poor sap died\n";
				BlueTeam.erase(BlueTeam.begin()+victim);
			}
}


}


	

}

if (menuchoice == 2)
{

	Gladiator G;
	Gladiator G2;
	cout << "This Gladiator was added to Red Team: " << endl;


	G.display();

	cout << " This Gladiator was added to Blue Team: " << endl;
	G2.display();


	RedTeam.push_back(G);
	BlueTeam.push_back(G2);
	

}




}
while(menuchoice != 3);

if (menuchoice == 3)

return 0;




}
