

#include "trideni.h"
#include <vector>

using namespace std;

void nacti (string nazev, seznam_slov & jmena) {

	string line;
    ifstream myfile;
    myfile.open("jmena.dat");

   if(!myfile.is_open()) {
      perror("Error open");
      exit(EXIT_FAILURE);
   }
    while(getline(myfile, line)) {}
/*
vector<string> jmena; 
string line;
int i=0;

ifstream seznam_slov;
soubor.open(jmena.dat);

while (getline(sezbam_slov, line)) {}
*/
}	

void serad(seznam_slov & jmena) {
}

bool zeptej_se_jestli_vypsat() {
	int dotaz;
	
	while (true ) {
	cout << "Chcete vypsat poradi jmen?"<< endl;
	cout << "Pro vypsani stisknete 1"<< endl;
	cout << "Pro pokracovani bez vypsani stiknete 0"<< endl;
	cin >> dotaz;
	if (dotaz==1) return true;
	else if (dotaz==0) return false;
	else cout << "Spatny vstup" << endl;
	}
	
		return d;
}


void vypis(seznam_slov const& jmena)

{
	int i;
	i=0;
	for (i;i<jmena.size();i++)
	{
		cout << jmena[i];
	}
}



	

