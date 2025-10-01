#pragma once
#include <iostream>
class PointerDemo
{
  public:
	  void DoDemo();
	  int Def = 0;// this passes by ref
	  int Atk = 0;
  private:
	  void PassByValueDemo();
	  void PassByRedDemo(PointerDemo& pointer); // use &
	  void UsePointersDemo(PointerDemo* pointerATK);// use p
	  void MemLeakDemo(); // fixing a memory leak




	
};

