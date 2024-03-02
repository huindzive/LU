# AuPLa0307_papildus.py
#************************************************
#AuPLa0307_papildus. Dots naturāls skaitlis n.
#Izdrukāt laukumu n × n no simboliem, kas atbilst šādam rakstam (pie n=4):
#
#*
#**
#***
#****
#************************************************
# Autors: Uldis Straujums
# Izveidota: 20.09.2021.
print("Izdrukā laukumu n × n no simboliem, kas atbilst rakstam")
ok = 1
while ok == 1: 
    n = int (input("Ievadiet laukuma izmēru: "))
    for i in range(n):
        for k in range(i+1):
            print('*', end='')
        print()

    ok = int(input("Vai turpināt (1) vai beigt (0)?"))
 
#**************** Testu plāns *****************
#  n          paredzamais rezultāts
#  4          zīmējums no uzdevuma formulējuma
#  2          *
#             **
#**********************************************
