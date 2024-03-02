/// AuPLa0603.cpp
/****************************************************************************
Uldis Straujums, us22011
AuPLa0603.
Sastādīt C++ programmu, kas dotam naturālam skaitlim noskaidro,
vai pierakstā ir vismaz divi vienādi cipari.
Risinājuma iegūšanai sastādīt funkciju, kura naturālam skaitlim noskaidro,
vai pierakstā ir vismaz divi vienādi cipari.
Funkcija atgriež kā rezultātu true,
ja pierakstā ir vismaz divi vienādi cipari,
atgriež false pretējā gadījumā.
Risinājumā lietot priekšrakstu switch.
Risinājumā nelietot masīvu.
Programma izveidota: 04.10.2023.
*****************************************************************************/
#include<iostream>
using namespace std;
/********************************************************************
int irVismazDiviVienadiCipari(int n);
Funkcija irVismazDiviVienadiCipari(n)
 atgriež kā rezultātu true,
 ja vesela skaitļa n pierakstā ir vismaz divi vienādi cipari,
 atgriež false pretējā gadījumā.
*********************************************************************/
int irVismazDiviVienadiCipari(int n)
{
 int s0, s1, s2, s3, s4, s5, s6, s7, s8, s9; /// s0 ir cipara 0 skaits skaitlī n,
                                             /// s1 ir cipara 1 skaits, utt.

 s0=s1=s2=s3=s4=s5=s6=s7=s8=s9=0;
 if (n<0) n = n;

 /// Uzskaita mainīgajos s0...s9 katra cipara (0..9) skaitu skaitlī n
 do{
    switch(n%10)
    {
     case 0: s0++; break;
     case 1: s1++; break;
     case 2: s2++; break;
     case 3: s3++; break;
     case 4: s4++; break;
     case 5: s5++; break;
     case 6: s6++; break;
     case 7: s7++; break;
     case 8: s8++; break;
     case 9: s9++; break;
    }
    n/=10;
 }while(n>0);

 /// Noskaidro, vai ir kāds cipars skaitlī n, kas sastopams vismaz divas reizes
 if((s0>1)or(s1>1)or(s2>1)or(s3>1)or(s4>1)or(s5>1)
    or(s6>1)or(s7>1)or(s8>1)or(s9>1))
        return true;
 else return false;
}
int main()
{
int sk;
int ok;
do
{
cout << "Naturālam skaitlim noskaidro, vai pierakstā ir vismaz divi vienādi cipari" << endl;
do
{
cout << "Ievadiet naturālu skaitli, skaitlis>=1: "<< endl;
cin >> sk;
if(sk<1) cout <<"Kļūdaina vērtība. Jāievada skaitlis, skaitlis>=1" << endl;
}while(sk<1);

cout << "Skaitlī " << sk
     << (irVismazDiviVienadiCipari(sk) == true? " ir ":" nav ")
     << "vismaz divi vienādi cipari" << endl;

cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
} while (ok == 1);
}
/******************* Testu plāns ****************************
      N       paredzamais rezultāts
        1      nav
     1002       ir
       101      ir
       212      ir
       313      ir
       414      ir
       515      ir
       616      ir
       717      ir
       818      ir
       919      ir
      4445      ir
      1234      nav
        0      kļūdaina vērtība
************************************************************/
