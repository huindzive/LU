/// find_Cstring_char.cpp
/*****************************************************
find_Cstring_char. Dota zema līmeņa simbolu virkne v.
Atrast pirmo pozīciju (0,1 utt.),
kurā atrodas ievadītais simbols s virknē v.
Ja simbols s nav atrasts,
tad atgriezt negatīvu vērtību (-1).
*****************************************************/
/// Autors: Uldis Straujums
/// Izveidota: 15.10.2021.

#include <iostream>
#include<cstring>
using namespace std;
/**************************************************
int find(char* v, char s);
Funkcija find(v, s) atrod pirmo pozīciju (0, 1...),
kurā atrodas simbols s zema līmeņa virknē v.
Ja nav atrasts, tad atgriež negatīvu vērtību (-1).
***************************************************/
int find(char* v, char s)
{
for (int i=0; i<strlen(v); i++)
if (v[i]==s) return i;
return -1;
}

int main()
{
char v[81];
char c;
int ok; /// lietotāja atbilde: 1 - turpināt, 0 - beigt

do
{

cout << "Ievadiet virkni, ne garāku par 80 simboliem: " << endl;

cin.getline(v, 81);
cout << "Virkne: " << v << endl;
cout << "Ievadiet meklējamo simbolu: "<< endl;
cin.get(c);

cout << endl;
cout << find (v, c) << endl;

cout << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
cin.ignore(); /// lai sāktu no tukšas plūsmas
}while(ok == 1);

return 0;
}
/***** Testu plāns ********************************
    v                   c   paredzamais rezultāts
  Biezpiena pilieni     i    1
  Biezpiena pilieni     B    0
  Biezpiena pilieni     ' '  9
  Biezpiena pilieni     b   -1
***************************************************/
