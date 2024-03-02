/// main.cpp
/********************************************************
AuPLa1301. Sastādīt C++ klasi Linearavirkne,
izmantojot objektorientētās programmēšanas līdzekļus un
strukturējot programmu vismaz trīs failos.
Klases hederi obligāti novietot
atsevišķā hedera failā (Linearavirkne.h).
Visas metodes realizēt ārpus hedera faila –
speciālā C++ failā (Linearavirkne.cpp).
Funkcija main ievietojama vēl citā C++ failā (main.cpp).
Klases dati pēc noklusēšanas ir slēpti (private),
bet metodes atklātas (public).
Klase Linearavirkne attēlo virkni, kuras
n-tā locekļa vērtības ir lineāri atkarīgas no
dotiem veseliem skaitļiem a, b, c un d:
V0=a; V1=b;
Vn= c*Vn-1 +d*Vn-2.
Jārealizē metodes:
virkne(n) - aprēķina n-to locekli,
print(n) – izdrukā n-to locekli.

Sastādīt klasi Linearavirkne pārbaudošu programmu,
kurā tiek izveidoti divi klases objekti –
automātiskā(tiešā) veidā un dinamiski un
objektiem tiek pielietotas metodes.
********************************************************/
/// Autors: Uldis Straujums
/// Izveidota: 19.11.2008.
/// Mainīta: 24.11.2020. Programmas kodējums nomainīts uz UTF-8
/// Mainīta: 23.11.2021. Uzlaboti komentāri, testu plāns cieti iekodēts main funkcijā
/// Mainīta: 23.11.2021. Testu plāns cieti iekodēts main funkcijā
/// Mainīta: 1.12.2022.  Vienkāršota main funkcija

#include <iostream>
#include "Linearavirkne.h"
using namespace std;
int main()
{
    Linearavirkne v; ///  1 1 1 1
    v.print(3);                            /// 3
    cout <<v.virkne(2)<<endl;              /// 2

    Linearavirkne* vdin;
    vdin = new Linearavirkne(1, 2, 3, 4);
    vdin->print(3);                        /// 38
    cout <<vdin->virkne(2)<<endl;          /// 10

    delete vdin;

 return 0;
}
