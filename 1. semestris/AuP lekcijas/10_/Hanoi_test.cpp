/// Hanoi_test.cpp
/*********************************************************
Realizē disku pārcelšanu saskaņā ar Hanojas torņu
   uzdevuma nosacījumiem:
     Ir trīs torņi. Viens tornis veidots no n diskiem,
   liekot mazāku uz lielāka.
   Pārējie divi torņi ir tukši.
     Jāpārliek visi diski uz kāda no tukšajiem torņiem,
   liekot pa vienam
   un tikai mazāku disku uz lielāka.
********************************************************/
/// Autors:  Uldis Straujums
/// Veidota:  v.1.0; 21.10.2005
/// Mainīta: v.1.1; 07.11.2006
///  Uldis Straujums - komentāri pielāgoti
///  LU Datorikas nodaļas standartam
/// Mainīta: v.1.2; 26.10.2010
///  Uldis Straujums - komentāri pielāgoti
///  LU DF standartam, pielikts testu plāns
/// Mainīta: v.1.3; 05.11.2019
///  Uldis Straujums – funkcija bez else zara
/// Mainīta: 05.11.2021. Uzlaboti funkcijas komentāri
/// Mainīta: 06.11.2023. Uzlaboti funkcijas komentāri

#include <iostream>
using namespace std;

/************************************************
 void hanoi(int n, int sak, int beig);
 Funkcija hanoi(n, sak, beig)
 izdrukā kā rezultātu n disku pārcelšanu
 no torņa sak uz torni beig,
 liekot pa vienam tikai mazāku uz lielāka.
 sak, beig pieder kopai (1,2,3).
*************************************************/
void hanoi(int n, int sak, int beig)
{
 if (n == 1)
  { cout <<sak << "->" << beig << endl; return;}
 hanoi (n - 1, sak, 6 - sak - beig);/// visu torņu
                                    /// numuru summa ir 6
 cout <<sak << "->" << beig << endl;
 hanoi (n - 1, 6 - sak - beig, beig);

 return;
}

int main()
{
  int n; /// disku skaits

  cout << "Atrisināsim Hanojas torņu uzdevumu" << endl;
  do{
    cout << "Ievadiet disku skaitu n"<< endl;;
    cin >> n;
    if (n<1) cout << "Kļūda, jāievada n>=1"<< endl;
    }while (n < 1);

  hanoi(n,1,3); /// rekursīvas funkcijas izsaukums
  return 0;

}  /// main funkcijas beigas

/************ Testu plāns ********************************
   n            paredzamais rezultāts
   2               1->2; 1->3; 2->3
   1               1-3
   0               kļūda, disku skaitam jābūt vismaz 1
*********************************************************/
