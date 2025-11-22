/*

#include<iostream>

using namespace std;


struct Lego
{
	char* nume;
	int cod;
	float pret;
};

void afisareLego( Lego g)
{
	cout << endl << "numele jocului este:" << g.nume << " " << "are codul" << " " << g.cod << endl << "si pretul" << " " << g.pret;

}




int main()
{
	Lego lego;

	lego.nume = new char[strlen("buchet trandafiri roz") + 1];
	strcpy_s(lego.nume, strlen("buchet de trandafiri roz") + 1);

	lego.pret = 325;
	lego.cod = 10374;
	

	cout << "primul task";

	afisareLego(lego);


}

*/\





#include <iostream>
using namespace std;

class Angajat
{

private:
	const int idAngajat;
	static int contor;
	string nume;
	char* departament;  //am un pointer  care imi  retine o adresa unde sa salvez o valoare de tipul char
	int varsta;
	float salariu;
	int nrZile;
	int* nrOrePeZi;


public:

	// constructor implicit

	Angajat(): idAngajat(contor++)
	{    

        //string
		this->nume = "necunoscut";
		//char*

		this->departament = nullptr;

		//int
		this->varsta = 0;
		this->salariu = 0;
		this->nrZile = 0;
	//int*
		this->nrOrePeZi = NULL;


	}

	// constructor cu 2-3 parametri



};


int main()
{

	Angajat a;


}