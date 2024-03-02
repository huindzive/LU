# AuPLa0402.py
'''
Uldis Straujums,us22011
AuPLa0302. Sastādīt Python+ programmu, kas pieprasa ievadīt N veselus skaitļus un
nosaka lielākā skaitļa vērtību.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 26.09.2022
'''
print("Pieprasa ievadīt N veselus skaitļus un nosaka garākās stingri augošas virknes garumu")
ok = 1
while ok == 1:
    # Nodrošina ieejas datu korektumu
    #  skaitļu skaits N: N>=1
    N = int(input("Ievadiet skaitļu skaitu N, N>=1: ")) 
    while N<1:
        N = int(input("Nekorekta vērtība, ievadiet skaitļu skaitu N, N>=1: ")) 
    
    # Izmanto korektu skaitļu skaitu N: N>=1
    iepr = int(input("Ievadiet veselu skaitli: ")) # Pašlaik virknes ievadītais vienīgais elements -
                                                  # ievadīts pirms cikla, lai būtu ar ko salīdzināt ciklā pirmo ievadīto elementu
    kgar = 1; # kandidāts garākās stingri augošas virknes garumam
    gar = 1; # pašlaik garākās stingri augošas virknes garums
    for i in range(N-1):
        sk = int(input("Ievadiet veselu skaitli: "))
        if sk > iepr: kgar+=1
        elif kgar > gar: 
            gar = kgar 
            kgar = 1
        iepr = sk
    if kgar > gar: gar = kgar
    
    print("Garākās stingri augošas virknes garums:", gar)
    ok = int(input(" Vai turpināt (1) vai beigt (0)? ")) 
'''           Testu plāns 
N      skaitļi                         paredzamais rezultāts
    11      -1 2 3 4 -1 2 7 11 13 19 4              6
    10      -1 2 3 4 -1 2 7 11 13 19                6
     1      21                                      1
     2     -19 -19                                  1
     5      1 2 3 4 17                              5
     0                                  jāievada N>=1
'''