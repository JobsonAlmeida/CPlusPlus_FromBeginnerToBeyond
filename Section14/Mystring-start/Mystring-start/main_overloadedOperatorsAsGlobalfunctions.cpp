#include <iostream>
#include <vector>
#include "Mystring2.h"

using namespace std;

int main()
{
	Mystring larry{ "Larry" };
	larry.display();

	larry = -larry;
	larry.display();

	cout << boolalpha << endl;
	Mystring moe{ "Moe" };	
	Mystring stooge = larry;

	cout << (larry == moe) << endl;
	cout << (larry == stooge) << endl;

	Mystring stooges = larry + "Moe";
	//Mystring stooges = "Larry" + moe; //now ok

	Mystring two_stooges = moe + " " + "Larry";
	two_stooges.display();

	Mystring three_stooges = moe + " " + larry + " " + "Curly";
	three_stooges.display();

	return 0;
}