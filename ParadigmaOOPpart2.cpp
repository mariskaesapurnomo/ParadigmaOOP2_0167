// ParadigmaOOPpart2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class seseorang
{
public:
	// pure virtual function
	virtual void pesan() = 0;

	/*virtual function biasa
		virtual void pesan()
	{
		cout << "Pesan dari seseorang" << endl;
	}*/
};

class joko : public seseorang
{
public:
	// deklarasi
	void pesan()
	{
		// implementasi
		cout << "Pesan dari joko" << endl;
	}
};
