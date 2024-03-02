# AuPLa0307_genereZvaigznes_2020.py
#******************************
#AuPLa00307. Dots naturāls skaitlis n. Sastādīt Python programmu, kas
#izdrukā laukumu n × n no simboliem, kas atbilst šādam rakstam (pie n=4):
#
#*
#**
#***
#****
#**********************************/
# Autors: Uldis Straujums
# Izveidots: 22.09.2020

n = int(input("Ievadiet laukuma izmēru n, n>=1: "))
while n<1:
   print("Kļūda. Jāievada n>=1")
   n = int(input("Ievadiet laukuma izmēru n, n>=1: "))

for r in range(n): # drukā n rindiņas
    print("*"*(r+1), end="")# ģenerē rindiņu 
    print()   

#************* Testu plāns ***********************
#  n          paredzamais rezultāts
#  4         zīmējums no uzdevuma formulējuma
#  2          *
#             **
#*************************************************