/*******************************************
Uldis Straujums, us22011
AuPLa0201. Izveidot C++ programmu,
kura pārvērš Fārenheita grādos uzdotu temperatūru par
temperatūru Celsija grādos. Formula pārvēršanai:
C = 5/9(F-32)
Jābūt iespējai programmu izpildīt atkārtoti,
neizejot no programmas.
Programma izveidota: 15.09.2023
*******************************************/
#include<iostream>
using namespace std;
int main(){
int ok;
do
{
float f; /// Lietotāja ievadītā temperatūra
float c;
cout << "Ievadiet Fārenheita grādos uzdotu temperatūru: "<< endl;
cin >> f;
c = 5./9*(f-32);
cout << "Temperatūra Celsija grādos: " << c << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
} while (ok == 1);
}
/******** Testu plāns ***************
   ievade      paredzamais rezultāts
     32              0
      0            -17.77
     97.88          36.6
**************************************/
