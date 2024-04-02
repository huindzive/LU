/*********************************
Artūrs Balnass ab23183
F12. Dots netukšs teksta fails. Uzrakstīt programmu, kura failā izvada visus ieejas failā sastaptos skaitļus 
    (par skaitli uzskatīt tikai tos vārdus, kuri sastāv tikai no cipariem. 
    Par vārdu uzskatīt patvaļīgu simbolu virkni, kas atdalīta ar tukšumiem vai pieturas zīmēm 
    (punkts, komats, apaļās iekavas, izsaukuma zīme, jautājuma zīme).
Programma veidota 22.02.2024
********************************/






#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <iostream>

using namespace std;

/*
bool isNumber(const string& word)
funkcija isNumber(word)
Tiek pārbaudīts vai word ir skaitlis
*/
bool isNumber(const string& word) {
    for (char const& c : word) {
        if (!isdigit(c)) return false;
    }
    return !word.empty();
}

int main() {
    int ok;
    do
    {
    string inputFileName;
    cout << "Enter input file name: ";
    cin >> inputFileName;

    ifstream inputFile(inputFileName);
    ofstream outputFile("output.txt");

    // Pārbaude vai nosauktie faili ir sasniedami/eksistē
    if (!inputFile.is_open() || !outputFile.is_open()) {
        cout << "Nevar atvērt ievades/izvades failu" << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        istringstream lineStream(line);
        string word;
        while (lineStream >> word) {
            // sagatavo vārdu pārbaudei
            word.erase(0, word.find_first_not_of(".,()!?"));
            word.erase(word.find_last_not_of(".,()!?") + 1);

            if (isNumber(word)) {
                outputFile << word << endl;
            }
        }
    }
    cout << "Esošie skaitļi ir ierakstīti izvades failā." << endl;
    inputFile.close();
    outputFile.close();


    cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
    } while (ok == 1);
    return 0;
}

/******************** Testa Plāns **************
    ievade                                  programmas vēlamā reakcija       izvades vēlamā reakcija    programmas rezultāts      izvades rezultāts

    input.txt                               Esošie cipari ir veiksmīgi       ""
    ""                                      izvadīti noteiktajā failā
________________________________________________________________________________________________________________________________
    mbhfg                                   Nevar atvērt ievades/            ""
                                            izvades failu
________________________________________________________________________________________________________________________________
    input.txt
    "Programma izveidota: 2017/09/28"       Esošie skaitļi ir veiksmīgi       ""
                                            izvadīti izvades failā        
________________________________________________________________________________________________________________________________
    input.txt
    "Hello, this is a test file.
    The year 2021 was tough, but 2022 seems pro147896325mising!
    There are 3 apples, 5 bananas, and 10 oranges.
    This line has no numbers.
    100% sure, or maybe 99.9%? Let's count 1234567890 as a number.
    Contact at info@example.com or visit www.example.com.
    (123) 456-7890 is a common phone format."

                                            

                                            Esošie skaitļi ir ierakstīti     2021
                                            izvades failā                    2022
                                                                             3
                                                                             5
                                                                             10
                                                                             1234567890
                                                                             123
***********************************************/