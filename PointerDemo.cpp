#include "PointerDemo.h"

using namespace std;

int main() 
{


}

void PointerDemo::DoDemo()
{
	PointerDemo* bigObject = new PointerDemo; //for memory leaking and sorting it wout

	PointerDemo pointer;
	PointerDemo pointerATK;
	pointer.Def = 0;
	PointerDemo* Ptr = &pointerATK;

	cout << "demo work";
	PassByRedDemo(pointer); // by ref... I think. this might be a by a value (I misspelt ref but it still works?)
	PassByValueDemo(); // Passes by value (position of the object)
	UsePointersDemo(&pointerATK); //pointer
	MemLeakDemo(); // Should fix Memory Leaks
}

void PointerDemo::PassByValueDemo() 
{


}
void PointerDemo::PassByRedDemo(PointerDemo& pointer) 
{
	cout << "My Defense is" << pointer.Def << endl;
	pointer.Def = 0;
}
void PointerDemo::UsePointersDemo(PointerDemo* pointerATK) 
{
	cout << "My ATK is" << pointerATK->Atk << endl;

}
void PointerDemo::MemLeakDemo() 
{


}




