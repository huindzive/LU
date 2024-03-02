/****************************************
Uldis Straujums, us22011
AuPLa1301. Izveidot C++ klasi darray,
izmantojot objektorientētās programmēšanas līdzekļus un
strukturējot programmu vismaz trīs failos.
Klases hederi obligāti novietot atsevišķā hedera failā (darray.h).
Visas metodes realizēt ārpus hedera faila – speciālā C++ failā (darray.cpp). Funkcija main ievietojama vēl citā C++ failā (main.cpp).
Klases dati pēc noklusēšanas ir slēpti (private),
bet metodes atklātas (public).
Klase darray attēlo dinamisku veselu skaitļu masīvu ar n elementiem.
Jārealizē metodes:
konstruktors,
kopijas konstruktors,
destruktors,
array_avg() - aprēķina masīva elementu vidējo vērtību un atgriež to,
print_array() – izdrukā masīvu.
Masīva elementu aizpildīšanai realizēt privātu metodi fill_array().

Izveidot klasi darray pārbaudošu programmu,
kurā tiek izveidoti divi klases objekti –
automātiskā (tiešā) veidā un dinamiski un
objektiem tiek pielietotas metodes.
Programma izveidota: 1.12.2023.
******************************************************************/
#include<iostream>
#include"darray.h"
using namespace std;
int main()
{
  darray m1(5);      /// 1 2 3 4 6
  m1.print_array();  /// 1 2 3 4 6
  float vid = m1.array_avg();
  cout <<"Vidējā vērtība: "<< vid << endl; /// 3.2
  darray* dm;
  dm = new darray(m1); /// 1 2 3 4 6
  dm->print_array();   /// 1 2 3 4 6
  vid = dm->array_avg();
  cout <<"Vidējā vērtība: "<< vid << endl; /// 3.2

  delete dm;
}
