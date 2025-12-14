#include<iostream>
using namespace std;

class Plantatie {

private:
	int const id;
	float* pretPomi;
	int nrPomi;


public:

	//constructorul cu un parametru
	Plantatie(int id) : id(id)
	{
		this->pretPomi = NULL;
		this->nrPomi = 0;
	}

	//constructorul de copiere

	Plantatie(const Plantatie& p) : id(p.id)
	{

		this->nrPomi = p.nrPomi;

		if (p.pretPomi != NULL)
		{
			this->pretPomi = new float[this->nrPomi];
			for (int i = 0; i < this->nrPomi; i++)
			{
				this->pretPomi[i] = p.pretPomi[i];
			}
		}
		else this->pretPomi = NULL;
	}

	//dezalocare

	~Plantatie()
	{
		delete[] pretPomi;
	}
};

int main()
{

}