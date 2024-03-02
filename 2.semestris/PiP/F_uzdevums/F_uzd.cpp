/*********************************
Artūrs Balnass ab23183
F12. Dots netukšs teksta fails. Uzrakstīt programmu, kura failā izvada visus ieejas failā sastaptos skaitļus 
    (par skaitli uzskatīt tikai tos vārdus, kuri sastāv tikai no cipariem. 
    Par vārdu uzskatīt patvaļīgu simbolu virkni, kas atdalīta ar tukšumiem vai pieturas zīmēm 
    (punkts, komats, apaļās iekavas, izsaukuma zīme, jautājuma zīme).
Programma veidota 22.02.2024
********************************/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

/*
bool isDigit(char c)
funkcija isDigit(c)
Tiek pārbaudīts, vai simbols c ir cipars, atgirež patiesuma vērtību
*/
bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

/*
void extractNumbersAndWriteToFile(const string& line, ofstream& outputFile)
funkcija extractNumbersAndWriteToFile(line,outputFile)
Tiek lasīta ievadītā līnija un no tās tiek ievadīti cipari izvades teksta failā
*/
void extractNumbersAndWriteToFile(const string& line, ofstream& outputFile) {
    string number;
    bool foundNumber = false;
    for (char c : line) {
        if (isDigit(c)) {
            number += c;
            foundNumber = true;
        }
        else {
            if (foundNumber) {
                outputFile << number << endl;
                number.clear();
                foundNumber = false;
            }
        }
    }
    if (foundNumber) {
        outputFile << number << endl;
    }
}

int main() {
    int ok;
    do
    {
        // lietotājs ievada ievades failu
        cout << "ievadi ievades faila nosaukumu: ";
        string inputFile;
        getline(cin, inputFile);


        string outputFile = "output.txt";

        // Tiek atvērti ievades un izvades faili
        ifstream input(inputFile);
        ofstream output(outputFile);


        // Pārbaude, vai faili ir veiksmīgi atvērti
        if (!input.is_open() || !output.is_open()) {
            cerr << "Fails neeksiste/Kļūda faila nosaukumā." << endl;
            cout << "Vai vēlaties turpināt (1) vai padoties (0)?" << endl;
            cin >> ok;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.clear(); 

            if (ok != 1) {
                break; // Beidz programmas darbību
            }
            continue; // atsāk no sākuma main funkcijas darbību
        }

        string line;
        while (getline(input, line)) {
            extractNumbersAndWriteToFile(line, output);
        }

        // Aizver ievades un izvades failus
        input.close();
        output.close();

        cout << "Esošie cipari ir veiksmīgi izvadīti noteiktajā failā." << endl;
        cout << " Vai turpināt (1) vai beigt (0)?" << endl;

        string inputLine;
        getline(cin, inputLine);
        stringstream(inputLine) >> ok;

    } while (ok == 1);
    return 0;
}


/******************** Testa Plāns **************
    ievade                                  programmas vēlamā reakcija       izvades vēlamā reakcija    programmas rezultāts      izvades rezultāts

    input.txt                               Esošie cipari ir veiksmīgi       ""
    ""                                      izvadīti noteiktajā failā
________________________________________________________________________________________________________________________________
    mbhfg                                   Fails neeksiste/                 ""
                                            Kļūda faila nosaukumā.
                                            Vai vēlaties turpināt (1)
                                            vai padoties (0)?
________________________________________________________________________________________________________________________________
    input.txt
    "Programma izveidota: 2017/09/28"       Esošie cipari ir veiksmīgi       2017
                                            izvadīti noteiktajā failā        09
                                                                             28
***********************************************/