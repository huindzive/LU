# AuPLa0302.py
'''
Uldis Straujums,us22011
AuPLa0302. Sastādīt Python+ programmu, kas pieprasa ievadīt N veselus skaitļus un
nosaka lielākā skaitļa vērtību.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 22.09.2020
Mainīts: 20.09.2022 Pievienoti komentāri par ieejas datu korektības nodrošināšanu
'''
print("Pieprasa ievadīt N veselus skaitļus un nosaka lielākā skaitļa vērtību")
ok = 1
while ok == 1:
    # Nodrošina ieejas datu korektumu
    #  skaitļu skaits N: N>=1
    N = int(input("Ievadiet skaitļu skaitu N, N>=1: ")) 
    while N<1:
        N = int(input("Nekorekta vērtība, ievadiet skaitļu skaitu N, N>=1: ")) 
    
    # Izmanto korektu skaitļu skaitu N: N>=1
    liel = int(input("Ievadiet veselu skaitli: ")) # Pieņem, ka pirmais skaitlis ir lielākais
    for i in range(N-1):
        sk = int(input("Ievadiet veselu skaitli: "))
        if sk > liel: liel = sk
    print("Lielākā skaitļa vērtība: ", liel)
    ok = int(input(" Vai turpināt (1) vai beigt (0)? ")) 
    
'''                Testu plāns 
   N      skaitļi                lielākais
   3      -2 17 4                     17
   1      21                          21
   2     -19 -21                     -19
   2      23   23                     23    
   0                                jāievada N>=1
'''