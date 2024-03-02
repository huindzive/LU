# *******************************************
# Artūrs Balnass, ab23183
# A22. Doti veseli skaitļi  m un n. Izdrukāt tos skaitļus, kuri atrodas intervālā [n,m] un ir veselu skaitļu kubi.
# Programma izveidota 11.10.2023
# ********************************************

while True:
    n = int(input("ievadi skaitli n:"))
    m = int(input("ievadi skaitli m:"))
    while n>= m:
        print("!!!! Nekorekti nosacījumi, n < m")
        n = int(input("ievadi skaitli n:"))
        m = int(input("ievadi skaitli m:"))

    for i in range(n,m+1):
        ks = 1
        if i < 0:
            while ks ** 3 > i:
                ks-=1
        elif i > 0:
            while ks ** 3 < i:
                ks += 1
        
        if ks ** 3 == i:
            print("kubsakne:",ks," ; intervāla vērtība:",i)

    ok = int(input("Vai turpināt (1) vai beigt (0)? "))
    if ok !=1:
        break  

# *************** Testu plāns **************
#   ievade       paredzētais iznākums
#   1,125        1,1  2,8  3,27  4,64  5,125
#   -149,49      -5,-125  -4,-64  -3,-27  -2,-8, -1,-1  1,1  2,8  3,27
#  ******************************************