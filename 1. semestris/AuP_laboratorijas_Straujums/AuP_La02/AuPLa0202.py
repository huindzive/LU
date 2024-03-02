'''
Uldis Straujums, us22011
AuPLa0202. Izveidot Python programmu,
kura pārvērš Fārenheita grādos uzdotu temperatūru par
temperatūru Celsija grādos. Formula pārvēršanai:
C = 5/9(F-32)
Jābūt iespējai programmu izpildīt atkārtoti,
neizejot no programmas.
Programma izveidota: 15.09.2023
'''
while True:
    f = float(input("Ievadiet Fārenheita grādos uzdotu temperatūru: "))
    c = 5/9*(f-32)
    print("Temperatūra Celsija grādos: ", c)
    ok = int(input("Vai turpināt (1) vai beigt (0)? "))
    if ok !=1:
        break    
'''    Testu plāns
   ievade      paredzamais rezultāts
     32              0
      0            -17.77
     97.88          36.6
'''
