/// AuPLa1101.cpp
/****************************************************
Uldis Straujums, us22011
AuPLa1101. Izveidot C++ klasi ”Taisnsturis”,
izmantojot objektorientētās programmēšanas līdzekļus.
Klasei ”Taisnsturis” jāapraksta taisnstūris ar
platumu platums un augstumu augstums.
Realizēt metodes:
Taisnsturis(platums, augstums) – konstruktors,
~Taisnsturis() – destruktors,
setPlatums(platums) – uzstāda taisnstūra platumu,
getPlatums() – atgriež taisnstūra platumu,
setAugstums(augstums) – uzstāda taisnstūra augstumu,
getAugstums() – atgriež taisnstūra augstumu,
laukums() – atgriež taisnstūra laukumu,
print() – izdrukā taisnstūra raksturlielumus.
Izveidot klasi „Taisnsturis” pārbaudošu programmu,
kurā tiek izveidoti divi klases objekti –
tiešā veidā un dinamiskā veidā un
objektiem tiek pielietotas visas metodes.
Programma izveidota: 12.11.2021.
******************************************************/
#include<iostream>
using namespace std;
/********************************************************************
Klase "Taisnsturis"
apraksta taisnstūri ar platumu platums un augstumu augstums.
Ir metodes:
Taisnsturis(platums, augstums) - konstruktors,
~Taisnsturis()                 - destruktors,
setPlatums(platums)            - uzstāda taisnstūra platumu,
getPlatums()                   - atgriež taisnstūra platumu,
setAugstums(augstums)          - uzstāda taisnstūra augstumu,
getAugstums()                  - atgriež taisnstūra augstumu,
laukums()                      - atgriež taisnstūra laukumu,
print()                        - izdrukā taisnstūra raksturlielumus.
*********************************************************************/
class Taisnsturis
{
 private:
 float platums;
 float augstums;
  public:
   Taisnsturis(float platums, float augstums);
  ~Taisnsturis();
 void setPlatums(float platums);
 float getPlatums();
 void setAugstums(float augstums);
 float getAugstums();
 float laukums();
 void print();
};
int main()
{
/// Izveido klases objektu taisnst1 tiešā veidā un pielieto visas metodes
/// Izveido klases objektu taisnst1 tiešā veidā
 Taisnsturis taisnst1= Taisnsturis(32.1,42.5);
 float plat;
 float augst;
 float lauk;
 Taisnsturis* taisnstd1;

cout << "Pārbauda tieši veidotu objektu:" <<endl;
/// Pielieto visas metodes objektam taisnst1
 taisnst1.print();     /// 32.1 42.5
 taisnst1.setPlatums(200);
 taisnst1.print();     /// 200 42.5
 plat = taisnst1.getPlatums();
 cout<<"Platums: "<<plat<<endl;   /// 200
 taisnst1.setAugstums(100);
 taisnst1.print();     /// 200 100
 augst = taisnst1.getAugstums();
 cout<<"Augstums: "<<augst<<endl;   /// 100
 lauk=taisnst1.laukums();
 cout<<"Laukums: "<<lauk<<endl;   /// 20000
 taisnst1.setAugstums(-1);
 taisnst1.print();     /// 200 100 (nav izmainīts)

                /// Izveido klases objektu taisnstd1 dinamiskā veidā un pielieto visas metodes
/// Izveido klases objektu taisnstd1 dinamiskā veidā ar platumu plat un augstumu augst
cout << "Pārbauda dinamiski veidotu objektu:" <<endl;
cout << "Ievadiet platumu: " << endl;
cin >> plat;    /// 1.5
cout << "Ievadiet augstumu: " << endl;
cin >> augst;   /// 2.6
taisnstd1 = new Taisnsturis(plat, augst);
/// pielieto visas metodes objektam taisnstd1
taisnstd1->print(); /// 1.5 2.6
taisnstd1->setPlatums(200);
 taisnstd1->print();     /// 200 2.6
 plat = taisnstd1->getPlatums();
 cout<<"Platums: "<<plat<<endl;   /// 200
 taisnstd1->setAugstums(100);
 taisnstd1->print();     /// 200 100
 augst = taisnstd1->getAugstums();
 cout<<"Augstums: "<<augst<<endl;   /// 100
 lauk=taisnstd1->laukums();
 cout<<"Laukums: "<<lauk<<endl;   /// 20000
 taisnstd1->setAugstums(-1);
 taisnstd1->print();     /// 200 100 (nav izmainīts)
/// atbrīvo objektam taisnstd1 dinamiski pieprasīto atmiņu
delete taisnstd1;
}
/// Metožu realizācijas
Taisnsturis::Taisnsturis(float platums, float augstums)
{
   this->platums = platums>0?platums:1.0;
   this->augstums = augstums>0?augstums:2.0;
}
Taisnsturis::~Taisnsturis()
{
   cout<<"Objekts ar adresi: "<<this<<" tiek likvidēts" << endl;
}
void Taisnsturis::setPlatums(float platums)
{
    if(platums > 0)
     this->platums = platums; /// ja padotais platums ir kļūdains, nemaina esošo platumu
}
float Taisnsturis::getPlatums()
{
   return platums;
}
void Taisnsturis::setAugstums(float augstums)
{
    if(augstums > 0)
     this->augstums = augstums; /// ja padotais augstums ir kļūdains, nemaina esošo augstumu
}
float Taisnsturis::getAugstums()
{
   return augstums;
}
float Taisnsturis::laukums()
{
    return augstums*platums;

}
void Taisnsturis::print()
{
    cout<<"Taisnstūra platums: "<<platums<<
          ", augstums: "<<augstums<< endl;
}
