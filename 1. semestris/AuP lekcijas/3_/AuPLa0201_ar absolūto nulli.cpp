// AuPLa201_ar absolūto nulli.cpp
/************************************************
AuPLa0201. Izveidot C++ programmu,
kura pārvērš Fārenheita grādos uzdotu temperatūru par temperatūru Celsija grādos.
Formula pārvēršanai:
C = 5/9(F-32)
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
************************************************/
// Autors: Uldis Straujums
// Izveidota: 13.09.2021.

#include<iostream>
using namespace std;

int main()
{
    double F; // double tips vajadzīgs, lai korekti salīdzinātu ar peldoša skaitļa literāli -459.67,
              // kas tiek glabāts kā double
    double C;
    int ok;

    cout << "Pārvērš Fārenheita grādos uzdotu temperatūru"
         << " par temperatūru Celsija grādos" << endl;
    cout << endl;
    do
    {
        do{
        cout << "Ievadiet Fārenheita grādos uzdotu temperatūru: ";
        cin >> F;
        if (F<-459.67)
            cout << "Temperatūra nevar būt zemāka par absolūto nulli -459.67 F"<<endl;
        }while(F<-459.67);
        C = 5.0/9*(F-32);
        cout << "Temperatūra Celsija grādos ir " << C << endl;
        cout << endl;
        cout << " Vai turpināt (1) vai beigt (0)?" << endl;
        cin >> ok;
    } while (ok == 1);
}
/**************** Testu plāns **************************************
   F         paredzamais rezultāts
     97.88      36.6
     32         0
      0       -17.7
   -459.67   -273.15
   -459.68   temperatūra nevar būt zemāka par absolūto nulli -459.67
********************************************************************/
