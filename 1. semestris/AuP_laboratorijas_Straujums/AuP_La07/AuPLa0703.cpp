/// AuPLa0703.cpp
/*******************************************************************
Uldis Straujums, us22011
AuPLa0703. Sastādīt C++ programmu, kas ļauj noskaidrot,
cik reizes teksta rindiņā ir sastopams konkrēts simbols.
Gan teksta rindiņu, gan simbolu ievada lietotājs.
Teksta rindiņa jāsaglabā programmā kā augsta līmeņa simbolu virkne.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 24.10.2017.
Mainīta: 21.10.2021. Uzlabots testu plāns, pielikti neburti
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
int ok;        /// lietotāja atbilde: 1 - turpināt, 0 - beigt

    do
{
   string rin;    /// lietotāja simbolu rindiņa(patvaļīga garuma)
   char s;        /// meklējamais simbols
   int reizes =0; /// meklējamā simbola sastapšanas reizes lietotāja virknē rin
   cout << "Noskaidro, cik reizes teksta rindiņā ir sastopams konkrēts simbols" << endl << endl;

   cout << "Ievadiet teksta rindiņu:" <<endl;
   getline(cin,rin);
   cout << "Ievadiet meklējamo simbolu:"<< endl;
   cin.get(s);

   reizes=0;
   for (int i=0;i<rin.length();i++)
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
