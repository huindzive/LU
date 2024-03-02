# AuPLa0502.py
'''
Uldis Straujums, us22011
AuPLa0501. Sastādīt C++ programmu, kas dotam naturālam skaitlim nosaka
dota cipara skaitu pierakstā.
Risinājuma iegūšanai sastādīt funkciju,
kura naturālam skaitlim nosaka dota cipara skaitu pierakstā.
Programma izveidota: 26.09.2018
Mainīts: 28.09.2021 Programmas kodējums nomainīts uz UTF-8
'''
'''
Funkcija cikDotaCipara(n, cip) -
 atgriež kā rezultātu dota cipara cip skaitu skaitļa n pierakstā.
'''
def cikDotaCipara(n,cip):
    dcsk = 0
    if n<0: n=-n    # Panāk, ka n ir naturāls
    while n > 0:
        if n%10 == cip: dcsk += 1
        n //= 10
    return dcsk
      
print("Dotam naturālam skaitlim nosaka dota cipara skaitu")
ok = 1
while ok == 1:
    N = int(input("Ievadiet naturālu skaitli N, N>=1: ")) 
    while N<1:
       N = int(input("Kļūdaina vērtība. Ievadiet N, N>=1: ")) 
    c = int(input("Ievadiet ciparu, 0<=cipars<=9: ")) 
    while c<0 or c>9:
          c = int(input("Kļūdaina vērtība. Ievadiet ciparu, 0<=cipars<=9: ")) 
    rez = cikDotaCipara(N, c)
    print("Naturālā skaitļa", N, "cipara", c, 
       "skaits ir", rez)
    
    ok = int(input(" Vai turpināt (1) vai beigt (0)? "))
 
'''             Testu plāns 
       n  cipars     paredzamais rezultāts
       17   1              1
        4   4              1
      377  17              jāievada cipars 0..9
      377   7              2
      123   9              0
     2444  -4              jāievada cipars 0..9
     2444   4              3
    -2440                  jāievada n>=1
     2440   4              2
'''
