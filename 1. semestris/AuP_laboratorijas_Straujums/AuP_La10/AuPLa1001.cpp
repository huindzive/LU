/// AuPLa1001.cpp
/********************************************************************************************
Uldis Straujums, us22011
AuPLa1001. Izveidot C++ programmu, kas no lietotāja dotiem naturāliem skaitļiem izveido
naturālu skaitļu vektoru v un izveido vektoru v2,
kurā ir tikai tie elementi no vektora v, kuri ir lielāki par 17.
Risinājumam izveidot C++ funkciju, kas saņem naturālu skaitļu vektoru un sliekšņa vērtību un
atgriež kā rezultātu vektoru, kurā ir tikai tie dotā vektora elementi,
kuri ir lielāki par sliekšņa vērtību.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 3.11.2020.
*********************************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
/*********************************************************************
vector<int> vektorsLielPar(const vector<int> &v, int s);
Funkcija vektorsLielPar(v, s)
 atgriež kā rezultātu vektoru, kurā ir tikai tie dotā vektora v elementi,
 kuri ir lielāki par sliekšņa s vērtību.
*********************************************************************/
vector<int> vektorsLielPar( const vector<int> &v, int s)
{
  vector<int>::const_iterator it;
  vector<int> v2;
for( it=v.begin();it!=v.end();++it)
{
    if(*it > s) v2.push_back(*it);
}
return v2;
}
/** Var arī tā
vector<int> vektorsLielPar( const vector<int> &v, int s)
{
  vector<int> v2;
for( int i=0;i<v.size();++i)
{
    if(v[i] > s) v2.push_back(v[i]);
}
return v2;
}


*/
int main()
{
   int ok;
do
{
 vector<int> v;
 vector<int>::const_iterator it;
 vector<int> v2;
 int el;

 do
 {
  do
  {
   cout << "Ievadiet vektora v elementu el (el>=1) vai ievadiet -1, ja gribat beigt ievadi: " << endl;
   cin >>el;
   if (el<1 && el!=-1) cout <<"Kļūdaina vērtība. Jāievada elements >=1" <<endl;
  }while(el<1 && el!=-1);
  if(el!=-1) v.push_back(el);
 }while(el!=-1);

 cout << "Dotais vektors v: " << endl;
 for( auto &elem: v)
 {
  cout <<elem << ' ';
 }
 cout << endl;
 v2 = vektorsLielPar(v, 17);
 cout << "Izveidots vektors v2 ar funkciju: " << endl;
 if(v2.size()>0)
 for( it=v2.begin();it!=v2.end();++it)
 {
  cout <<*it << endl;
 }
 else cout <<"Nav elementu" << endl;
 cout << endl;

 cout << " Vai turpināt (1) vai beigt (0)?" << endl;
 cin >> ok;
 }while(ok==1);
return 0;
}
/******** Testu plāns *************************
ievade              paredzamais rezultāts
1 22 31 -1          22 31
1 2 3 -1            tukšs vektors
23 34 18 -1         23 34 18
-1                  tukšs vektors
-2                  kļūda
18 -1               18
**********************************************/
