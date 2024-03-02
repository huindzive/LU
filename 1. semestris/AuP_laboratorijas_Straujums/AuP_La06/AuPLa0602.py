# AuPLa0602.py
'''
Uldis Straujums, us22011
AuPLa0602. Sastādīt Python programmu, kas noskaidro, 
vai doto naudas daudzumu var izveidot, lietojot pa vienai reizei 
tikai divas no dotajām trīs monētām – 1, 2 un 5 centu monētas. 
Realizācijā jālieto priekšraksts „match case”. 
Programma izveidota: 10.10.2023.
'''
# Strādā tikai ar Python versijām, sākot ar 3.10.x,
#  jo, sākot ar 3.10.x, ieviests priekšraksts match case
      
print("Noskaidro, vai doto naudas daudzumu var izveidot,",
      " lietojot pa vienai reizei tikai divas no dotajām trīs monētām -",
      " 1, 2 un 5 centu monētas")
ok = 1
while ok == 1:
    nauda = int(input("Ievadiet naudas daudzumu, kas lielāks par 0: ")) 
    while nauda <= 0:
        nauda = int(input("Kļūdaina vērtība. Ievadiet naudas daudzumu, kas lielāks par 0: ")) 
    match nauda: 
        case 3:
            print("Doto naudas daudzumu", nauda, 
              "var izveidot ar  1 un 2 centu monētām")
        case 6:
            print("Doto naudas daudzumu", nauda, 
                  "var izveidot ar  1 un 5 centu monētām") 
        case 7:
            print("Doto naudas daudzumu", nauda, 
                  "var izveidot ar  2 un 5 centu monētām")
        case _:
            print("Doto naudas daudzumu", nauda, 
                  "nevar izveidot,")
            print("lietojot pa vienai reizei tikai divas no dotajām trīs monētām -")
            print("1, 2 un 5 centu monētas")            
    
    ok = int(input(" Vai turpināt (1) vai beigt (0)? "))

     
'''             Testu plāns 
Naudas daudzums         Paredzamais rezultāts
3                       var
6                       var
7                       var
0                       vajag ievadīt daudzumu, kas >0
4                       nevar
8                       nevar
-1                      vajag ievadīt daudzumu, kas >0
'''
