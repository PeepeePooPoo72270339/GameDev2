#include "CointerDemo.h"
using namespace std;

//declare the variables that will be used here:
string cars[4] = { "BMW", "datsun", "garbage", "scrap" };
list<int> deck = { 1,2,3,4,5 };
vector<int> Test = { 1,2,3,4 };


void CointerDemo::DoDemo()
{
	ListDemo();
	ArrayDemo();
	VectorDemo();

}


void VariableSetup() 
{


}

void CointerDemo::ArrayDemo()
{
	std::cout << cars[0];
	

}

void CointerDemo::ListDemo() // decks work better with vectors but this works too
{

	auto it = deck.begin();
	std::advance(it, 1);
	deck.pop_front(); // removes the top item off a list needs to increment?
	std::cout << "card at the top of the deck is" << *it << endl;


	//Basically draws/removes the top card of the deck and readies the next card

}

void CointerDemo::VectorDemo() //A Random Number Lottery
{


	int num = Test.front();

	//RandomNumberGenerator stuff. Necessary for shuffling
	std::random_device rd;
	std::mt19937 g(rd());


	std::shuffle(Test.begin(), Test.end(), g);//The actual shuffling

	if (num == 4)
	{
		std::cout << "YouWin" << endl;

	}


}