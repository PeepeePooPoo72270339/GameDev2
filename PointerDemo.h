#pragma once
#include <iostream>
class PointerDemo
{
  public:
	  void DoDemo();
	  void PassByValueDemo(PointerDemo Pointer);
	  int MP;
	  int Def = 0;// this passes by ref
	  int Atk = 0;
	 
	  int mpparse = 0;
  private:
	  void PassByRedDemo(PointerDemo& pointer); // use &
	  void UsePointersDemo(PointerDemo* pointerATK);// use p
	  void MemLeakDemo(); // fixing a memory leak




	
};
