/// AuPLa1001.cpp
/*******************************************************************
AuPLa1001. Izveidot C++ funkciju vertskaits(a, n, s), kas noskaidro,
cik reizes skaitļu masīvā a ar n elementiem sastopams skaitlis s un
atgriež reižu skaitu kā rezultātu.
Paredzēt, lai funkcija vertskaits varētu apstrādāt gan
veselu skaitļu masīvu, gan reālu skaitļu masīvu.
Izveidot arī funkciju vertskaits(a, n, s) izsaucošu programmu.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
*******************************************************************/
/// Autors: Uldis Straujums
/// Izveidota: 2009.11.03.
/// Mainīta: 2010.11.02. Pielikts testu plāns, f-jas realizācija pirms main f-jas
/// Mainīta: 2012.10.31. Pielikts prototips, realizācija pārcelta aiz main
/// Mainīta: 2016.10.27. Uzlaboti mainīgo vārdi. Pielikta statiska reālu skaitļu masīva apstrāde
/// Mainīta: 3.11.2020. Programmas kodējums nomainīts uz UTF-8
/// Mainīta: 3.11.2021. Uzlaboti funkciju komentāri
/// Mainīta: 5.11.2022. Vienkāršoti mainīgo vārdi

#include <iostream>
using namespace std;
const int NMAKS = 17;  /// Maksimālais skaitļu skaits statiskā masīvā
/***************************************************************
int vertskaits(const int a[], int n, int s);
Funkcija vertskaits(a, n, s)
 atgriež kā rezultātu, cik reizes n veselu skaitļu masīvā a
 sastopams vesels skaitlis s.
***************************************************************/
int vertskaits( const int a[], int n, int s)
/// varēja arī int vertskaits(const int* a, int n, int s)
{
    int skaits=0;
    for (int i=0;i<n;i++)
        if (a[i]==s)skaits++;
    return skaits;
}
/*********************************************************************
int vertskaits(const float a[], int n, float s);
Funkcija int vertskaits(a, n, s)
 atgriež reižu skaitu kā rezultātu, cik reizes n reālu(float) skaitļu masīvā a
 sastopams reāls(float) skaitlis s.
*********************************************************************/
int vertskaits( const float a[], int n, float s)
/// varēja arī int vertskaits(const float* a, int n, float s)
{
    int skaits=0;
    for (int i=0;i<n;i++)
        if (a[i]==s)skaits++;
    return skaits;
}
int main()
{
   int ok;     /// lietotāja atbilde: 1 - turpināt, 0 - beigt

    do /// paredz atkārtotu programmas izpildi
    {
     int m[NMAKS];      /// apstrādājamais veselu skaitļu statisks masīvs
     int n;             /// apstrādājamo skaitļu skaits statiskam veselu skaitļu masīvam
     int sk;            /// meklējamais veselais skaitlis
     float mf[NMAKS];   /// apstrādājamais reālu skaitļu statisks masīvs
     int nf;            /// apstrādājamo skaitļu skaits statiskam reālu skaitļu masīvam
     float skf;         /// meklējamais reālais skaitlis
     int* dm;           /// apstrādājamo veselo skaitļu dinamiska masīva mainīgais(norāde)
     int dn;            /// apstrādājamo skaitļu skaits dinamiskam veselu skaitļu masīvam
     float* dmf;        /// apstrādājamo reālo skaitļu dinamiska masīva mainīgais(norāde)
     int dnf;           /// apstrādājamo skaitļu skaits dinamiskam reālu skaitļu masīvam
     int skaits;        /// rezultāts - meklējamā skaitļa reižu skaits masīvā

     ///  Apstrādā veselu skaitļu statisku un dinamisku masīvus m un dm
          /// Apstrādā statisku veselu skaitļu masīvu m
     do
          {
            cout <<"Ievadiet statiska veselu skaitļu masīva skaitu n, 1<=n<=" << NMAKS << ": "<<endl;
            cin >> n;
            if(n<1 or n>NMAKS)
                cout << "Kļūdaina vērtība." << endl;
          }while(n<1 or n>NMAKS);

     for (int i=0; i<n; i++)
     {
     cout << "Ievadiet " << i+1 << ". veselo skaitli:" << endl;
     cin >> m[i];
     }
     cout << "Ievadiet meklējamo veselo skaitli:" << endl;
     cin >> sk;

     cout << endl;
     skaits = vertskaits(m, n, sk);
     cout<< "Veselais skaitlis " << sk << " sastopams "
         << skaits << " reizes" << endl << endl;;


          /// Apstrādā dinamisku veselu skaitļu masīvu dm
     do
     {
     cout<< "Ievadiet dinamiska veselu skaitļu masīva skaitļu skaitu n, n>=1: " << endl;
     cin >> dn;
     if (dn<1) cout << "Kļūdaina vērtība." << endl;
     }while(dn<1);

     dm = new int[dn];

     for (int i=0; i<dn; i++)
     {
     cout << "Ievadiet " << i+1 << ". veselo skaitli:" << endl;
     cin >> dm[i];
     }
     cout << "Ievadiet meklējamo veselo skaitli:" << endl;
     cin >> sk;

     cout << endl;
     skaits = vertskaits(dm, dn, sk);
     cout<< "Veselais skaitlis " << sk << " sastopams "
         << skaits << " reizes" << endl << endl;

     delete[] dm;

    /// Apstrādā reālu(float) skaitļu statisku un dinamisku masīvus mf un dmf
         /// Apstrādā statisku reālu(float) skaitļu masīvu mf
     do
          {
            cout <<"Ievadiet statiska reālu(float) skaitļu masīva skaitu n, 1<=n<=" << NMAKS << ": "<<endl;
            cin >> nf;
            if(nf<1 or n>NMAKS)
                cout << "Kļūdaina vērtība." << endl;
          }while(nf<1 or nf>NMAKS);


     for (int i=0; i<nf; i++)
     {
     cout << "Ievadiet " << i+1 << ". reālo skaitli:" << endl;
     cin >> dmf[i];
     }
     cout << "Ievadiet meklējamo reālo skaitli:" << endl;
     cin >> skf;

     cout << endl;
     skaits = vertskaits(dmf, nf, skf);
     cout<< "Reālais skaitlis " << skf << " sastopams "
         << skaits << " reizes" << endl << endl;

        /// Apstrādā dinamisku reālu skaitļu masīvu dmf
     do
     {
     cout<< "Ievadiet dinamiska reālu(float) skaitļu masīva skaitļu skaitu n, n>=1: "<< endl;
     cin >> dnf;
     if (dnf<1) cout << "Kļūdaina vērtība."<< endl;
     }while(dnf<1);

     dmf = new float[dnf];

     for (int i=0; i<dnf; i++)
     {
     cout << "Ievadiet " << i+1 << ". reālo skaitli:" << endl;
     cin >> dmf[i];
     }
     cout << "Ievadiet meklējamo reālo skaitli:" << endl;
     cin >> skf;

     cout << endl;
     skaits = vertskaits(dmf, dnf, skf);
     cout<< "Reālais skaitlis " << skf << " sastopams "
         << skaits << " reizes" << endl << endl;

     delete[] dmf;

     cout << endl;
     cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
}while(ok == 1);

   return 0;
}
/************************* Testu plāns **********************************
n   skaitļi         meklējamais    paredzamais rezultāts
3    1 -3 -3          -3           2
4    -1 -2  3 7        6           0
0                                  Kļūdaina vērtība
1    5.1                 5.1       1
3    1.5 2.6 3.7       4.2         0
***************************************************************************/
