// Proiect_POO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Coada.h"
#include "Coada.cpp"
#include "Node.h"
#include "Graf.h"
#include <algorithm>

using namespace std;


int main()
{
	Graf test;

	cin >> test;
	//cout << test;
	Graf test2(test);
	//cout << test2;
	cout << "\n";
	if (test == test2) cout << " Merge operatorul == \n";
	if (test.Test_Conexitate()==1) cout << "Graful este conex \n";
	else cout << "Graful nu este conex \n";
    

	Graf test3;
	cin >> test3;
	Graf rezultat;
	cout << "\n";
	test3.Parcurgere_In_Latime();
	test3.Parcurgere_In_Adancime();
	test3.Determinare_Matrice_Drumuri();
	 rezultat = test2 + test3;
	cout << rezultat;
	
	
	return 0;
}

