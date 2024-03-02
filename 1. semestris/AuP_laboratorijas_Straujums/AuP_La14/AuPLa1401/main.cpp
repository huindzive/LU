/**********************************************************************************************
Uldis Straujums, us22011
AuPLa1401. Izveidot C++ klasi Kvadrats, izmantojot objektorientētās programmēšanas līdzekļus un
strukturējot programmu vismaz trīs failos.
Klases hederi obligāti novietot atsevišķā hedera failā (Kvadrats.h).
Visas metodes realizēt ārpus hedera faila – speciālā C++ failā (Kvadrats.cpp).
Funkcija main ievietojama vēl citā C++ failā (main.cpp).
Klases dati pēc noklusēšanas ir slēpti (private), bet metodes atklātas (public).
Klasei Kvadrats jāapraksta ģeometriska figūra “kvadrāts “ un darbības ar to.
Klasei izveidot šādas metodes:
(1) konstruktors, kas izveido kvadrātu ar malas garumu a,
(2) konstruktors, kas izveido kvadrātu kā cita kvadrāta kopiju,
(3) destruktors, kurš paziņo par objekta likvidēšanu,
(4) metode laukums (), kas aprēķina kvadrāta laukumu,
(5) metode mainit(v),
kas piešķir kvadrāta malas garumam vērtību v,
(6) metode drukat(), kas izdrukā uz ekrāna kvadrāta malas garumu un laukumu.
Pārbaudīt realizāciju, veidojot vienu Kvadrats klases objektu tiešā veidā un
otru objektu – dinamiskā veidā.
Programma izveidota: 8.12.2023.
***********************************************************************************************/
#include<iostream>
#include"Kvadrats.h"
using namespace std;
int main()
{
   /// Izveido klases Kvadrats objektu tiešā veidā un
   /// pielieto objektam visas metodes
   Kvadrats kv1(12);
   kv1.drukat();    /// 12 144
   kv1.mainit(3.5);
   kv1.drukat();    /// 3.5 12.25
   cout <<kv1.laukums() << endl; /// 12.25

   /// Izveido klases Kvadrats objektu dinamiskā veidā un
   /// pielieto objektam visas metodes
   Kvadrats* dinkv;
   dinkv = new Kvadrats(kv1);
   dinkv->drukat();    /// 12 144
   dinkv->mainit(3.5);
   dinkv->drukat();    /// 3.5 12.25
   cout <<dinkv->laukums() << endl; /// 12.25
   dinkv->mainit(-1);
   dinkv->drukat();    /// 3.5 12.25, jo nav nomainīts

   delete dinkv;
}
