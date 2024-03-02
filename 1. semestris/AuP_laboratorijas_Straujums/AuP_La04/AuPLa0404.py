# AuPLa0404.py
'''
Uldis Straujums,us22011
AuPLa0404. Sastādīt Python programmu, kas dotam naturālam skaitlim nosaka 
lielāko ciparu pierakstā. 
Risinājuma iegūšanai sastādīt funkciju, 
kura naturālam skaitlim nosaka lielāko ciparu pierakstā.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 24.09.2019
'''
'''
Funkcija lielCipars(n) -
 veselam skaitlim n nosaka lielāko ciparu pierakstā.
 Atgriež kā rezultātu lielāko ciparu skaitļa n pierakstā.
'''
def lielCipars(n):
   lcip = 0 # Lielākais cipars
   if n<=0: n=-n   # Panāk, ka n ir naturāls
   while n > 0:
       pedc = n%10 # Kārtējais pēdējais cipars
       if pedc > lcip: lcip = pedc
       n//=10;    # Atmet no n pēdējo ciparu
   return lcip;

print("Dotam naturālam skaitlim nosaka lielāko ciparu ")
ok = 1
while ok == 1:
   n = int(input("Ievadiet naturālu skaitli N, N>=1: ")) 
   while n<1:
      n = int(input("Kļūdaina vērtība. Ievadiet N, N>=1: "))
   rez = lielCipars(n)
   print("Naturālā skaitļa", n, "lielākais cipars ir", rez)      
   ok = int(input(" Vai turpināt (1) vai beigt (0)? "))   

'''          Testu plāns 
     N    paredzamais rezultāts
 12345687     8
        3     3
       17     7
        0     Jāievada vesels skaitlis >0
       -7     Jāievada vesels skaitlis >0
        7     7
'''
