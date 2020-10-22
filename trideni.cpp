#include "trideni.h"
#include <vector>

using namespace std;

void nacti (std::string nazev, seznam_slov & jmena) {

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

using namespace std;

int DotazNaVypsani () {
	int d;
	
	while (d != 0 || d !=1 ) {
	cout << "Chcete vypsat poradi jmen?"<< endl;
	cout << "Pro vypsani stisknete 1"<< endl;
	cout << "Pro pokracovani bez vypsani stiknete 0"<< endl;
	cin >> d;
	}
	
		return d;
}


	

