/*************************************************************************************************************************
Artūrs Balnass ab23183
B22. Sastādīt programmu, kura reizina un dala racionālus skaitļus, racionālos skaitļus uzdodot kā divu veselu skaitļu pāri
(1/3 tiek uzdota kā divi skaitļi 1 un 3). Rezultātam jābūt kā nesaīsināmam daļskaitlim. Risinājumā izmantot funkciju,
kas reizina divus racionālus skaitļus un funkciju, kas pārveido racionālu skaitli par nesaīsināmu daļskaitli.
Programma veidota 01.11.2023
*************************************************************************************************************************/

/*
int gtc(int a, int b);
funkcija gtc(a,b)
atgriež kā rezutātu a un b lielāko kopīgo dalītāju.
*/

/*
void vienkarsot(int& dalamais, int& dalitajs);
funkcija vienkarsot(dalamais,dalitajs)
izveido daļu dalamais/dalitajs, kas ir nesaīsināma daļa.
*/

/*
void reizinasana(int num1, int denom1, int num2, int denom2);
funkcija reizinasana(num1,denom1,num2,denom2)
izdrukā paziņojumu "Reizināšanas rezultāts: num1*num2  / denom1*denom2"
*/

/*
void dalisana(int num1, int denom1, int num2, int denom2);
funkcija dalisana(num1,denom1,num2,denom2)
izdrukā paziņojumu "Dalīšanas rezultāts: num1*denom2  /  num2*denom1"
*/

#include <iostream>
#include <cctype>
using namespace std;

//atgriež abu racionālo skaitļu lielāko kopīgo dalītāju
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
// pārveido racionālu skaitli par nesaīsināmu daļskaitli.
void vienkarsot(int& dalamais, int& dalitajs) {
    int kopigais = gcd(dalamais, dalitajs);
    dalamais /= kopigais;
    dalitajs /= kopigais;
}
// sareizina divus racionālus skaitļus num1/denom1, num2/denom2, un pārveido iegūto racionālu skaitli par nesaīsināmu daļskaitli.
void reizinasana(int num1, int denom1, int num2, int denom2) {
    int result_num = num1 * num2;
    int result_denom = denom1 * denom2;
    vienkarsot(result_num, result_denom);
    cout << "Reizināšanas rezultāts: " << result_num << "/" << result_denom << endl;
}
// sadala divus racionālus skaitļus num1/denom1, num2/denom2, un pārveido iegūto racionālu skaitli par nesaīsināmu daļskaitli.
void dalisana(int num1, int denom1, int num2, int denom2) {
    int result_num = num1 * denom2;
    int result_denom = denom1 * num2;
    vienkarsot(result_num, result_denom);
    cout << "Dalīšanas rezultāts: " << result_num << "/" << result_denom << endl;
}

int main() {
    int ok;
        do
        {
            int num1, denom1, num2, denom2;

            cout << "Ievadi pirmo racionālo skaitli(skaitļus atdalīt ar atstarpi(space)): ";
            cin >> num1 >> denom1; // Ievada pirmo racionālo skaitli
            while (denom1 == 0 || isalpha(num1)== true || isalpha(denom1)== true) { // Tiek pārbaudīts vai pirmā racionālā skaitļa dalītājs ir derīgs
                cout << "Dalītājs nevar būt 0, Ievadi pirmo racionālo skaitli(skaitļus atdalīt ar atstarpi(space)): ";
                cin >> num1 >> denom1;
            }

            cout << "Ievadi otro racionālo skaitli(skaitļus atdalīt ar atstarpi(space)): ";
            cin >> num2 >> denom2; // Ievada otro racionālo skaitli
            while (denom2 == 0 || isalpha(num2)== true || isalpha(denom2)== true) { // Tiek pārbaudīts vai otrā racionālā skaitļa dalītājs ir derīgs
                cout << "Dalītājs nevar būt 0, Ievadi otro racionālo skaitli(skaitļus atdalīt ar atstarpi(space)): ";
                cin >>  num2 >> denom2;
            }

            reizinasana(num1, denom1, num2, denom2); // Izsauc funkciju, kas izpilda racionālo skaitļu dalīšanu
            dalisana(num1, denom1, num2, denom2); // Izsauc funkciju, kas izpilda racionālo skaitļu dalīšanu

            cout << " Vai turpināt (1) vai beigt (0)?" << endl;
            cin >> ok;

        } while (ok == 1);
        }


// ################################### testa piemēri ###########################

//   ievade               Sagaidāmais rezultāts
//
//   1 2 4 5              Abu skaitļu reizinājums: 2/5  |  Abu skaitļu dalījums: 5/8
//   -1 4 -9 45           Abu skaitļu reizinājums: 1/20  |  Abu skaitļu dalījums: 5/4
//   -1 0 4 5             "dalītājs nevar būt 0." , "Ievadi pirmā skaitļa dalāmo: "
//   -1 1 45 0            "dalītājs nevar būt 0." , "Ievadi otrā skaitļa dalāmo: "

// ############################################################################
