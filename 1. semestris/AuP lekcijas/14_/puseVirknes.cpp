///puseVirknes.cpp
/************************************************************************
Uldis Straujums, us22011
Izveidot C++ funkciju, kas no dotās teksta rindiņas izveido jaunu rindiņu,
liekot jaunajā teksta rindiņā tikai tikai dotās rindiņas 2, 4, 6. utt. simbolus. .
Izveidot funkciju, kas apstrādā augsta līmeņa simbolu virkni un
izveidot funkciju, kas apstrādā zema līmeņa simbolu virkni.
Sastādīt C++ programmu izveidoto funkciju darbības pārbaudei.
Teksta rindiņas ievada lietotājs.
Programma izveidota: 27.11.2023.
Mainīta: 5.12.2023. Uzlabota funkcijas specifikācija
***********************************************************************/
#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
/*************************************************
string puseVirknes(string tr);
Funkcija puseVirknes(tr)
atgriež kā rezultātu augsta līmeņa simbolu virkni,
kas satur tikai dotās rindiņas tr 2, 4, 6. utt. simbolus.
**************************************************/
string puseVirknes(string tr)
{
  string burti="";
  for (int i=1;i<tr.length();i+=2)
         burti+=tr[i];

  return burti;
}
/*************************************************
void puseVirknes(char* tr, char* burti);
Funkcija puseVirknes(tr, burti)
aizpilda padoto zema līmeņa simbolu virkni burti
ar tikai dotās rindiņas tr 2, 4, 6. utt. simboliem.
**************************************************/
void puseVirknes(char* tr, char* burti)
{
  int j=0; /// kārtējā simbola vieta virknē burti

  for (int i=1;i<strlen(tr);i+=2)
    {burti[j]=tr[i];j++;}

  burti[j]='\0';

  return;
}
/*************************************************
char* puseVirknes(char* tr);
Funkcija puseVirknes(tr)
atgriež kā rezultātu zema līmeņa simbolu virkni,
kas satur tikai dotās rindiņas tr 2, 4, 6. utt. simbolus.
Funkcija pieprasa dinamiski atmiņu rezultāta simbolu virknei.
**************************************************/
char* puseVirknes(char* tr)
{
  char* burti = new char(strlen(tr)+1);
  int j=0; /// kārtējā simbola vieta virknē burti

  for (int i=1;i<strlen(tr);i+=2)
    {burti[j]=tr[i];j++;}

  burti[j]='\0';

  return burti;
}
int main()
{
   string ra;
   char rz[21];
   char rpuse[21];

   cout <<"Ievadiet teksta rindiņu augsta līmeņa simbolu virknei: "<< endl;
   getline(cin, ra);
   cout << "Pusvirkne no augsta līmeņa simbolu virknes: "
        <<'\"'<<puseVirknes(ra)<<'\"'<<endl;
   cout <<"Ievadiet teksta rindiņu zema līmeņa simbolu virknei, ne garāku par 20 simboliem: "<< endl;
   cin.getline(rz, 21);
    cout <<'\"'<<rz <<'\"'<< endl;
   puseVirknes(rz, rpuse);
   cout << "Pusvirkne no zema līmeņa simbolu virknes, kas ierakstīta argumentā rburti: "
        <<'\"'<<rpuse<<'\"'<< endl;
   char* dinamrburti = puseVirknes(rz);
   cout << "Pusvirkne no zema līmeņa simbolu virknes, kas atgriezta kā rezultāts: "
        <<'\"'<<dinamrburti<<'\"'<< endl;

    delete[] dinamrburti;
}
/****************  Testu plāns **********************
teksta rindiņa      paredzamais rezultāts
" a B 2? cC "       "aB2 C"
****************************************************/
