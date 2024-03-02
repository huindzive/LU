/// Linearavirkne.cpp
/*********************************************
Klase Linearavirkne attēlo virkni, kuras
n-tā locekļa vērtības ir lineāri atkarīgas no
dotiem veseliem skaitļiem a, b, c un d:
V0=a; V1=b;
Vn= c*Vn-1 +d*Vn-2.
Realizētas metodes:
virkne(n) - aprēķina n-to locekli,
print(n) – izdrukā n-to locekli.
*********************************************/
/// Autors: Uldis Straujums
/// Izveidota: 14.11.2009.
#include <iostream>
#include "Linearavirkne.h"
using namespace std;

Linearavirkne::Linearavirkne(int a, int b, int c, int d)
{
   this->a = a;
   this->b = b;
   this->c = c;
   this->d = d;
   cout << "Izveidots objekts ar adresi " << this << endl;
   cout << this->a<< ' '<< this->b<<' '<<this->c<< ' '<<this->d << endl;
}
Linearavirkne::~Linearavirkne()
{
  cout << "Tiks likvidēts objekts ar adresi " << this << endl;
}
int Linearavirkne::virkne (int n) /// aprēķina n-to locekli
{
    if (n <= 0) return a;
    if (n == 1) return b;
    return c*virkne(n-1) + d*virkne(n-2);
}
void Linearavirkne::print (int n) /// izdrukā virknes n-to locekli
{
    cout << "Virknes "<< n << ".loceklis ir " << virkne(n) << endl;
}
