/// EA1.cpp
/*********************************************************
EA1. Izveidot programmu C++ valodā vai Python.
Dots vesels pozitīvs skaitlis n. Samainīt vietām pirmo un pēdējo ciparu.
Piemērs #1. n=4, rezultāts 4.
Piemērs #2. n=120, rezultāts 21.
Piemērs #3. n=3574, rezultāts 4573.
********************************************************/
/// Autors: Roberts Gordins
/// Izveidots: 12.12.2019.
/// Mainīts: 12.12.2023. Uzlabots mainīgā vārds pakape->pakapesVert

#include <iostream>
using namespace std;

int main()
{

int ok;     /// lietotāja atbilde: 1 - turpināt, 0 - beigt

do          /// paredz atkārtotu programmas izpildi
{
int n;
int jn;     /// jaunais n
int pedCip;
int pirmCip;
int pakapesVert; /// 10 kāpināts tā, lai varētu noskaidrot n pirmo ciparu
                 /// ja n=3754, tad pakapesVert=1000 un pirmCip=3754/1000=3
   cout << "Samaina vietām skaitļa pirmo un pēdējo ciparu" << endl;
   do
   {
    cout << "Ievadiet veselu pozitīvu skaitli:" <<endl;
    cin >> n;
    if(n<=0)
        cout <<"Kļūdaina vērtība. Jāievada vesels pozitīvs skaitlis." << endl;
   }while(n<=0);

   pakapesVert=1;
   while(n/pakapesVert>9) pakapesVert*=10;

   pirmCip = n/pakapesVert;
   pedCip = n%10;
   cout << "pirmCip: "<<pirmCip<<" pedCip: "<< pedCip << endl;
   cout << "Pakāpes vērtība: " << pakapesVert << endl;
   jn = pedCip*pakapesVert + n%pakapesVert - pedCip + pirmCip;

   n = jn;
   cout << "Izveidotais skaitlis: "<< n << endl;

   cout << endl;
   cout << " Vai turpināt (1) vai beigt (0)?" << endl;
   cin >> ok;

}while(ok == 1);

return 0;
}
/*********** Testu plāns *********************
    n           paredzamais rezultāts
     4              4
   120             21
  3574           4573
*********************************************/
