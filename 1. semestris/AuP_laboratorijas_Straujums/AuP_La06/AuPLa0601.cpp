/// AuPLa0601.cpp
/*********************************************************************
Uldis Straujums, us22011
AuPLa0601. Sastādīt C++ programmu, kas noskaidro,
vai doto naudas daudzumu var izveidot, lietojot pa vienai reizei
tikai divas no dotajām trīs monētām – 1, 2 un 5 centu monētas.
Realizācijā jālieto priekšraksts „switch”.
Programma izveidota: 28.09.2021.
**********************************************************************/
#include <iostream>
using namespace std;
int main()

{
   int nauda;  /// dotais naudas daudzums
   int ok;     /// lietotāja atbilde: 1 - turpināt, 0 - beigt

    do
    {
     cout << "Noskaidro, vai doto naudas daudzumu var izveidot, "
          << "lietojot pa vienai reizei tikai divas no dotajām trīs monētām - "<<endl;
     cout << "1, 2 un 5 centu monētas"<<endl;
      /// Ievada naudas daudzumu mainīgajā nauda, jābūt >0
     do{
     cout<< "Ievadiet naudas daudzumu, kas lielāks par 0" << endl;
     cin>>nauda;
      if (nauda<=0) cout << "Kļūdains naudas daudzums. Jāievada daudzums, kas lielāks par 0" << endl;
      }while (nauda<=0);

    switch (nauda)
     {
    case 1+2:
        cout << "Doto naudas daudzumu " << nauda <<
            " var izveidot ar 1 un 2 centu monētām" << endl;
        break;
    case 1+5:
        cout << "Doto naudas daudzumu " << nauda <<
            " var izveidot ar 1 un 5 centu monētām" << endl;
        break;
    case 2+5:
        cout << "Doto naudas daudzumu " << nauda <<
            " var izveidot ar 2 un 5 centu monētām" << endl;
        break;
    default:
        cout << "Doto naudas daudzumu " << nauda <<
            " nevar izveidot," << endl;
        cout << "lietojot pa vienai reizei " <<
            "tikai divas no dotajām trīs monētām -" << endl;
        cout << "1, 2 un 5 centu monētas" << endl;

    };

     cout << endl;
      cout << " Vai turpināt (1) vai beigt (0)?" << endl;
      cin >> ok;
     } while (ok == 1);

   return 0;
}
/************** Testu plāns **************************
Naudas daudzums         Paredzamais rezultāts
3                       var
6                       var
7                       var
0                       vajag ievadīt daudzumu, kas >0
4                       nevar
8                       nevar
-1                      vajag ievadīt daudzumu, kas >0
******************************************************/


