

#include "trideni.h"
#include <vector>

using namespace std;

void nacti (string nazev, seznam_slov & jmena) {

	std::string line;
    ifstream myfile;
    myfile.open("jmena.dat");

   if(!myfile.is_open()) {
      perror("Error open");
      exit(EXIT_FAILURE);
   }
    while(getline(myfile, line)) {
    	jmena.push_back(line);
	}

}	

void serad(seznam_slov & jmena) {
	std::string tmp;
	bool bylo_prohozeno;
	do{
		bylo_prohozeno = false;
		for (int i=1; i<jmena.size(); i++) {
			if (jmena[i].compare(jmena[i-1]) < 0){
				tmp = jmena [i];
				jmena[i] = jmena [i-1];
				jmena[i-1]= tmp;
				bylo_prohozeno = true;
			}
		}
	} while (bylo_prohozeno);
	
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

}


void vypis(seznam_slov const& jmena)

{
	int i;
	i=0;
	for (i;i<jmena.size();i++)
	{
		cout << jmena[i] << endl;
	}
}

/*
Nacteno 4275 slov.
Serazuji slova ...
Hotovo. Serazeni trvalo 0.591 sekundy.
*/
