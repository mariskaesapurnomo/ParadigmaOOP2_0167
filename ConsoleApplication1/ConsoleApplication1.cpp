// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// class parent 
// tambahkan final sesudah nama class
// untuk mencegah adanya overriding

class baseClass
{
public:
	virtual void perkenalan()
	{
		cout << "Hallo saya function dari base class";
	}
};

class derivedClass : public baseClass
{
public:
	void perkenalan()
	{
		cout << "Halo saya function dari derived Class";
	}
};

