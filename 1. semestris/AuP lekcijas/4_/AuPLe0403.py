# AuPLe0403.py
#************************************************
# AuPLe0403.Izveidot Python programmu,
# kas pieprasa ievadīt N veselus skaitļu un
# nosaka gan lielāko skaitli gan mazāko skaitli.
# Risinājuma iegūšanai sastādīt funkciju,
# kura pieprasa ievadīt N veselus skaitļus un
# atgriež gan lielāko skaitli gan mazāko skaitli. 
#***********************************************
# Autors: Uldis Straujums
# Izveidota: 27.09.2021.

#**********************************************************
# Funkcija nLielMaz(n) -
# pieprasa ievadīt n veselus skaitļus un
# atgriež gan lielāko skaitli liel gan mazāko skaitli maz.
# ********************************************************/
def nLielMaz(n):
    sk = int(input("Ievadiet veselu skaitli: "))
    liel=maz=sk
    for i in range(n-1):
        sk = int(input("Ievadiet veselu skaitli: "))
        if sk>liel: liel = sk
        elif sk<maz: maz = sk
    return liel, maz


print("Dotiem N veseliem skaitļiem nosaka gan lielāko skaitli "
      "gan mazāko skaitli")
ok=1
while ok == 1:
    N = int(input("Ievadiet skaitļu skaitu N, N>=1: "))
    while N<1:
        if N<1: 
            print("Kļūda. Ievadiet N, N>=1")
        N = int(input("Ievadiet skaitļu skaitu N, N>=1: "))
    lielakais, mazakais = nLielMaz(N)
    print("Lielākais skaitlis ir", lielakais, 
          ", mazākais skaitlis ir", mazakais)
    ok = int(input("Vai turpināt (1) vai beigt (0)?"))

#**************** Testu plāns **************************************
#   N    skaitļi   paredzamais rezultāts
#   3     2 1 3      3 1
#   2    -9 -11     -9 -11
#   1    17         17 17
#   0              jāievada >=1
#  -1              jāievada >=1
#*******************************************************************
