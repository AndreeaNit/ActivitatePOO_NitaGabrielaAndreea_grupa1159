#include<iostream>
using namespace std;

enum Transport {avion, masina, barca};

	class Sejur
	{
		private:
			const int id;
		string destinatie;
		float pretBaza;
		int nrExcursiiOptionale;
		float* pretExcursie;
		int durata;  //nr zile
		Transport transport;


        public:
        
        //constructor cu un parametru(id)
        Sejur(int id):id(id)
        {
            this->destinatie ="na";
            this->pretBaza = 0;
            this->nrExcursiiOptionale = 0;
            this->pretExcursie=NULL;
            this->durata=0;
            this->transport=masina;
        }
        
        
        //getter-ma lasa sa citesc din zona private
        int getDurata()
        {
            return this->durata;
        }
        
        Transport getTransport()
        {
            return this->transport;
        }
        
        
        //setter-ma lasa sa modific din zona private
        
        void setDurata(int durata)
        {
            if(durata >= 1)
            {
                this->durata = durata;
            }
        }
        
        void setTransport(Transport transport)
        {
            this->transport=transport;
        }
        
        
        //constructorul cu toti parametrii
        
 //Sejur s1(102, "Dubai", avion, 5, 2000, 3, new float[3]{100,350,150})
  Sejur(int id, string destinatie, Transport transport, int durata, float pretBaza, int nrExcursiiOptionale, float*pretExcursie):id(id)
  {
      this->destinatie= destinatie;
      this->pretBaza = pretBaza;
      this->nrExcursiiOptionale = nrExcursiiOptionale;
      this->pretExcursie = new float[nrExcursiiOptionale];
      for(int i = 0; i < nrExcursiiOptionale; i++)
      {
          this->pretExcursie[i] = pretExcursie[i];
      }
      this->durata = durata;
      this->transport = transport;
  }
  
  
  //dezalocarea memoriei
  ~Sejur()
  {
      delete[] this -> pretExcursie;
  }
  
  //constructorul de copiere
  Sejur(const Sejur & s):id(s.id)  //const id nu poate fi modificat si se initializeaza in afara obiectului
  
  {
       this->destinatie= s.destinatie;
      this->pretBaza = s.pretBaza;
      this->nrExcursiiOptionale = s.nrExcursiiOptionale;
      this->pretExcursie = new float[s.nrExcursiiOptionale];
      for(int i = 0; i < s.nrExcursiiOptionale; i++)
      {
          this->pretExcursie[i] = s.pretExcursie[i];
      }
      this->durata = s.durata;
      this->transport = s.transport;
  }
        
	};
	
	
	


	int main()
	{
        Sejur s(10); // apel constructor cu un parametru;
        
        //apel getter
        cout <<s.getDurata()<<endl;
        cout<<s.getTransport()<<endl;
        
        
        //apel setter
        s.setDurata(10);
        s.setTransport(avion);
        
        //apel constructor cu toti parametrii
        Sejur s2(102, "Dubai", avion, 5, 2000, 4, new float[4]{100,350,100,150});
        
        
        //apel constructor copiere
        Sejur s4 = s2;
        
	}
	
	
	
	//pt  char*
/*	this->departament = new char[strlen(departament) + 1];
strcpy(this->departament, departament);
*/
