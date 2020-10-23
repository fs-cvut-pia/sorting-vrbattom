#include <string>
#include <iostream>
#include <vector>
#include <fstream>


typedef std::vector<std::string> seznam_slov;

void nacti (std::string nazev, seznam_slov & jmena);

bool zeptej_se_jestli_vypsat();
	
void serad(seznam_slov & jmena);

void vypis(seznam_slov const& jmena);
