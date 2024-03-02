# AuPLa0802.py
'''
Uldis Straujums, us22011 
AuPLa0802. Sastādīt Python programmu, kas ļauj noskaidrot,
vai doto naturālu skaitli n var izteikt kā divu naturālu skaitļu kvadrātu summu.
Izdrukāt visus šādus naturālu skaitļu pārus.
Risinājumam izveidot funkciju, kas aprēķina divu naturālu skaitļu kvadrātu summu.
Programma izveidota: 24.10.2023.
'''
'''
Funkcija divKvadrSumma(a, b) 
 atgriež kā rezultātu veselu skaitļu a un b kvadrātu summu.
'''
def divKvadrSumma(a, b):
    return a*a + b*b

ok = 1
while ok==1:
    print("Noskaidro, vai doto naturālu skaitli n var izteikt kā divu naturālu skaitļu kvadrātu summu")
    ir = False  # true, ja atrasts kaut viens pāris
   
    n = int(input("Ievadiet naturālu skaitli n, n>=1: "))
    while n<1:
        n = int(input("Kļūdaina vērtība. Ievadiet naturālu skaitli n, n>=1: "))
        
    for n1 in range(1,n):
        for n2 in range(1, n1+1):       # n2<=n1 vajadzīgs, lai neatkārtotos skaitļu pāri
            if divKvadrSumma(n1,n2)==n:
                print(n2, n1)           # izdrukā vispirms mazāko skaitli
                ir = True
    
    if ir == False:
        print(n,"nevar izteikt kā divu naturālu skaitļu kvadrātu summu")   
    
    ok= int(input("Vai turpināt(1) vai beigt(0)? "))
    
'''         Testu plāns 
       n                            paredzamais rezultāts
       2                             1 1
      50                             5 5
                                     1 7
       3                             nevar izteikt
       5                             1 2
       0                             jāievada n>=1
      -1                             jāievada n>=1
'''