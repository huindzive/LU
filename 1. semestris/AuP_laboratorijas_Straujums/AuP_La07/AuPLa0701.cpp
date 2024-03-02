/// AuPLa0701.cpp
/*******************************************************************
Uldis Straujums, us22011
AuPLa0701. Sastādīt C++ programmu, kas ļauj noskaidrot,
cik reizes teksta rindiņā ir sastopams konkrēts simbols.
Gan teksta rindiņu, gan simbolu ievada lietotājs.
Teksta rindiņa jāsaglabā programmā kā zema līmeņa simbolu virkne.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 24.10.2017.
Mainīta: 21.10.2021. Uzlabots testu plāns, pielikti neburti
********************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
int ok;          /// lietotāja atbilde: 1 - turpināt, 0 - beigt

    do
{
   char rin[81]; /// lietotāja simbolu virkne(ne garāka par 80), 81.simbols paredzēts '\0'
   char s;          /// meklējamais simbols
   int reizes = 0;  /// meklējamā simbola sastapšanas reizes lietotāja virknē rin
   cout << "Noskaidro, cik reizes teksta rindiņā ir sastopams konkrēts simbols" << endl << endl;

   cout << "Ievadiet teksta rindiņu, ne garāku par 80 simboliem: " <<endl;
   cin.getline(rin,81);

   cout << "Ievadiet meklējamo simbolu: "<< endl;
   cin.get(s);

   for (int i=0;i<strlen(rin);i++)
   if (rin[i]==s) reizes++;

   cout << "Teksta rindiņā \"" << rin << "\" simbols '" << s
           << "' sastopams " << reizes << " reizes" << endl;
   cout << endl;

    cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin>> ok;
    cin.ignore(); /// lai turpinātu no tukšas plūsmas(ignorē iepriekš ievadīto ENTER)
}while(ok == 1);

return 0;
}
/************** Testu plāns **************************
 rindiņa        simbols   paredzamais rezultāts
 "te ir 2 t."     t          2
 "nav E"          e          0
 " te ir 4 "     ' '         4
*****************************************************/
