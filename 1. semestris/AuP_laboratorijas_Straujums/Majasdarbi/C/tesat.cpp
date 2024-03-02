/*************************************************************************************************************************
Artūrs Balnass ab23183
C22. Dots naturāls skaitlis n. Atrast un izdrukāt ciparu, kurš dotā skaitļa pierakstā sastopams visbiežāk. Ja tādi ir vairāki,
izdrukāt lielāko. Skaitļa dalīšana ciparos jāveic skaitliski.
Programma veidota 22.11.2023
*************************************************************************************************************************/
/*
void countDigits(long long N, int frequency[])
funkcija countDigits(n,frequency)
No N tiek saskaitīts ciparu skaits un attiecīgi ierakstīts ciparu daudzums iekš frequency.
*/

/*
int findMostFrequentDigit(const int frequency[])
funkcija findMostFrequentDigit(frequency)
Tiek atgriezta lielākā vērtība, kura tiek uzrādīta iekš frequency un tam tiek pielīdzināts cipars.
*/
#include <iostream>
#include <limits>

using namespace std;

void countDigits(long long N, int frequency[]) {
    for (int i = 0; i < 10; ++i) {
        frequency[i] = 0;
    }
    do {
        int digit = N % 10;
        frequency[digit]++;
        N /= 10;
    } while (N > 0);
}

int findMostFrequentDigit(const int frequency[]) {
    int maxFrequency = 0;
    int digit = 0;
    for (int i = 0; i < 10; ++i) {
        if (frequency[i] >= maxFrequency) {
            maxFrequency = frequency[i];
            digit = i;
        }
    }
    return digit;
}

int main() {
    int ok;
    do
    {
    long long N;
    int frequency[10];
    /// Tiek ievadīt skaitlis number, kurš tiek validēts, vai tas ir naturāls skaitlis
    while (true) {
        cout << "Ievadiet naturālu skaitli(0 <= N <= 9,223,372,036,854,775,807): ";
        if (cin >> N) {
            if (N > 0) {
                break;
            } else {
                cout << "Tika ievadīts negatīvs skaitlis" << endl;
            }
        } else {
            cout << "Nepareizi ievadīti dati. Ievadiet naturālu skaitli(0 <= N <= 9,223,372,036,854,775,807)." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    countDigits(N, frequency);/// Tiek izsaukta funkcija, kurā tiek skaitīti cipari iekš numbers
    cout << "Biežāk sastopamais un lielākais cipars ir: " << findMostFrequentDigit(frequency) << endl;

    cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
    } while (ok == 1);
    return 0;
}


// ################################### testa piemēri ###########################

//      ievade                          Sagaidāmais rezultāts
//
//      123                             Biežāk sastopamais un lielākais cipars ir: 3
//      -654564                         Tika ievadīts negatīvs skaitlis
//      viens                           Nepareizi ievadīti dati. Ievadiet naturālu skaitli(N>=0).
//      9223372036854775808             Nepareizi ievadīti dati. Ievadiet naturālu skaitli(N>=0).       (long long mainīgā ārpus limita skaitlis)
//      9223372036854775807             Biežāk sastopamais un lielākais cipars ir: 7

// ############################################################################