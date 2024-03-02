# AuPLa0702.py
'''
Uldis Straujums, us22011 
AuPLa0702. Sastādīt Python programmu, 
kas ļauj noskaidrot, cik reizes teksta rindiņā ir sastopams konkrēts simbols. 
Gan teksta rindiņu, gan simbolu ievada lietotājs. 
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 19.10.2021.
Mainīts: 21.10.2021 Nelieto indeksu; Uzlabots testu plāns, pielikti neburt
'''
ok = 1
while ok==1:
    rin = input("Ievadiet teksta rindiņu: ")
    simb = input("Ievadiet meklējamo simbolu: ")
    reizes = 0
    for s in rin:
        if s == simb: 
            reizes+=1
    print("Teksta rindiņā '"+rin+"' ir sastopams simbols '"+simb+"' "+ str(reizes)+ " reizes")
    rez = f"Teksta rindiņā '{rin}' ir sastopams simbols '{simb}' {reizes} reizes"
    print(rez)
    ok= int(input("Vai turpināt(1) vai beigt(0)? "))
    
'''         Testu plāns 
   rindiņa        simbols   paredzamais rezultāts
 "te ir 2 t."      t          2
 "nav E"           e          0
 " te ir 4 "      ' '         4
'''