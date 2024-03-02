# AuPLe0401_cik5.py
#********************************************************************
# Funkcija cik5(int n) -
#  naturālam skaitlim n nosaka, cik skaitļa pierakstā ir ciparu 5 un
#  atgriež to kā rezultātu.
#  Ja n<0, tad n aizvieto ar pretējo skaitli.
########
def cik5(n):
    skaits5 =0
    if n<0: n=-n
    while n>0:
        if n%10==5: skaits5+=1
        n//=10    # Atmet no n pedējo ciparu
    return skaits5

ok=1
while ok==1:
    n = int(input("ievadiet naturālu skaitli n, n>=0:"))
    rez = cik5(n)
    print("Naturāla skaitļa", n, "pierakstā ir ", rez, "cipari 5")
    ok = int(input("Vai turpināt(1) vai beigt(0)?"))

#**************** Testu plāns ***************
#       n        paredzamais rezultāts
#     1525         2
#       51         1
#        3         0
#      -35       jāievada skaitlis>=0
#********************************************
