# AuPLa0202.py
#************************************************
# AuPLa0202. Izveidot Python programmu, 
# kura pārvērš Fārenheita grādos uzdotu temperatūru par temperatūru Celsija grādos. 
# Formula pārvēršanai:
# C = 5/9(F-32)
# Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas. 
#***********************************************
# Autors: Uldis Straujums
# Izveidota: 13.09.2021

print("Pārvērš Fārenheita grādos uzdotu temperatūru"
      " par temperatūru Celsija grādos")
ok=1
while ok == 1:
    F = float(input("Ievadi Fārenheita grādos uzdotu temperatūru: "))
    while F<-459.67:
        if F<-459.67: 
            print("Temperatūra nevar būt zemāka par absolūto nulli -459.67 F")
        F = float(input("Ievadi Fārenheita grādos uzdotu temperatūru: "))
    C = 5.0/9*(F-32)
    print("Temperatūra Celsija grādos ir ", C)
    ok = int(input("Vai turpināt (1) vai beigt (0)?"))

#**************** Testu plāns **************************************
#   F         C
#   97.88       36.6
#   32          0
#    0        -17.7
# -459.67    -273.15
# -459.68   temperatūra nevar būt zemāka par absolūto nulli -459.67
#*******************************************************************
