/// find_string.cpp
/******************************************************************
find_string. Dota augsta līmeņa simbolu virkne v.
Atrast pirmo pozīciju (0,1 utt.), kurā atrodas simbols s virknē v.
Ja simbols s nav atrasts, tad atgriezt negatīvu vērtību (-1).
******************************************************************/
/// Autors: Uldis Straujums
/// Izveidota: 15.10.2018.
/// Mainīta: 18.10.2021. Uzlaboti komentāri, papildināts testu plāns

#include <iostream>
#include<string>
using namespace std;
/****************************************************
int find(string v, char s);
Funkcija find(v, s) atrod pirmo pozīciju (0, 1, ...),
kurā atrodas simbols s augsta līmeņa virknē v.
Ja nav atrasts, tad atgriež negatīvu vērtību (-1).
****************************************************/
int find(string v, char s)
{
for (int i=0; i<v.length(); i++)
if (v[i]==s) return i;
return -1;
}

int main()
{
string v;
int ok; /// lietotāja atbilde: 1 - turpināt, 0 - beigt

do
{
cout << "Ievadiet virkni" << endl;

getline(cin,v);

cout << "Virkne: " << v<< endl;
cout << find (v, 'i') << endl;
cout << find (v, 'B') << endl;
cout << find (v, 'b') << endl;

cout << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
cin.ignore(); /// lai sāktu no tukšas plūsmas
}while(ok == 1);

return 0;
}
/***** Testu plāns ************************
    v                   s    paredzamais rezultāts
  Biezpiena pilieni     i    1
                        B    0
                        b   -1
  te ir balts           i    3
                        B   -1
                        b    6
*******************************************/
