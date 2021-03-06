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
	Graf *v;
	int n;
	cin >> n; 
    v = new Graf[n]; //citirea unui vector de grafuri 
	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	sort(v, v + n);
	
	cout << "Afisare dupa sortare: \n";
		
	for (int i = 0; i < n; i++)
			cout << v[i]<<"\n";

			cout << "***____*** \n";
			cout << "Parcurgerea in adancime :";
	v[0].Parcurgere_In_Adancime();
cout << "Parcurgerea in Latime :";
	v[0].Parcurgere_In_Latime();
cout << "Matricea de drumuri \n";
	v[0].Determinare_Matrice_Drumuri();

	if (v[0].Test_Conexitate()==true) cout<<"Graful este conex \n";
	else cout << "Graful nu este conex \n";
	v[0].Afisare_Componente_Conexe();
    
	cout << "\n";
	Graf test;
	test = v[0] + v[1];//testarea operatorului =
	cout << test; //afisez rezultatul operatorului +
	
	test.Add(4, cin);
	cout << test;

	delete[]v;
	return 0;
}

