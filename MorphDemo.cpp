#include "MorphDemo.h"
#include <list>
#include <iterator>
using namespace std;

WizardAttack wizard;
GoblinAttack goblin;
MorphDemo Morpher;
vector<MorphDemo*> myList;
//I can't figure out how to add the child classes into this, sorry
void MorphDemo::DoDemo()
{

	for (MorphDemo* a : myList)
	{
		a->Attack();

	}

}

void MorphDemo::Attack()
{

}



