# AuPLa0504.py
'''
Uldis Straujums, us22011
AuPLa0504. Sastādīt Python programmu, kas pieprasa ievadīt N veselus skaitļus un 
nosaka lielākā skaitļa vērtību. 
Risinājumā jāizmanto funkcija lielakais(a, b), kas atgriež kā rezultātu 
lielāko no dotajiem veselajiem skaitļiem a un b.
Funkcijas lielakais(a, b) realizācijā jāizmanto 
kondicionālais operators (conditional expression).
Programma izveidota: 06.10.2020
'''
'''
Funkcija  lielakais(a, b) -
 atgriež kā rezultātu lielāko no dotajiem veselajiem skaitļiem a un b.
'''
def lielakais(a,b):
    return a if a>=b else b 

print("Pieprasa ievadīt N veselus skaitļus un nosaka lielākā skaitļa vērtību")
ok = 1
while ok == 1:
    # Nodrošina ieejas datu korektumu
    #  skaitļu skaits N: N>=1
    N = int(input("Ievadiet skaitļu skaitu N, N>=1: ")) 
    while N<1:
        N = int(input("Nekorekta vērtība, ievadiet skaitļu skaitu N, N>=1: ")) 
    
    # Izmanto korektu skaitļu skaitu N: N>=1
    sk = int(input("Ievadiet veselu skaitli: "))
    liel = sk
    for i in range(N-1):
       sk = int(input("Ievadiet veselu skaitli: "))
       liel = lielakais(liel, sk)
    print("Lielākais skaitlis ir ", liel)
    ok = int(input(" Vai turpināt (1) vai beigt (0)? ")) 
'''                 Testu plāns
    N      skaitļi                lielākais
    3      -2 17 4                     17
    1       21                         21
    2      19 19                       19
    2     -11 -9                       -9
    0                                  kļūdaina vērtība
'''