# EA1.py
'''
EA1. Izveidot programmu C++ valodā vai Python. 
Dots vesels pozitīvs skaitlis n. Samainīt vietām pirmo un pēdējo ciparu. 
Piemērs #1. n=4, rezultāts 4. 
Piemērs #2. n=120, rezultāts 21. 
Piemērs #3. n=3574, rezultāts 4573.
'''
# Autors: Roberts Gordins
# Izveidota: 10.12.2019.
# Mainīts: 12.12.2023. Uzlabots mainīgā vārds pakape->pakapesVert

print("Samaina vietām skaitļa pirmo un pēdējo ciparu ")
ok = 1
while ok == 1:
    
    n = int(input("Ievadiet veselu pozitīvu skaitli: ")) 
    while n<1:
        n = int(input("Kļūdaina vērtība. Ievadiet veselu pozitīvu skaitli: "))
        
    pakapesVert=1 # 10 kāpināts tā, lai varētu noskaidrot n pirmo ciparu
                  # ja n=3754, tad pakape=1000 un pirmCip=3754/1000=3
    while n//pakapesVert>9:
        pakapesVert*=10
    pirmCip = n//pakapesVert
    pedCip = n%10
   
    jn = n%pakapesVert + pedCip*pakapesVert - pedCip + pirmCip 
    n  = jn
    print("Izveidotais skaitlis: ", n)
    
    ok = int(input(" Vai turpināt (1) vai beigt (0)?"))

#**************** Testu plāns ***************
#    n           paredzamais rezultāts
#     4            4
#   120           21
#  3574         4573
#********************************************
