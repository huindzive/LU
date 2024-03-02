# AuPLa0304.py
'''
Uldis Straujums,us22011
AuPLa0304. Izveidot Python programmu, kura ļauj ievadīt trīs naturālus skaitļus un noskaidro,
vai starp skaitļiem ir kāds “laimīgais skaitlis”.
“Laimīgais skaitlis” ir tāds skaitlis, kura pēdējie divi cipari ir 21.
Noskaidrošanu veikt tikai ar skaitliskām darbībām.
Programma izveidota: 15.09.2020
Mainīts: 22.09.2021 Lietota salikta loģiskā izteiksme
Mainīts: 23.09.2023 Uzlabota lietotāja saskarne, papildināts testu plāns
'''
print('Noskaidro,vai starp trīs naturāliem skaitļiem ir kāds "laimīgais skaitlis"')
ok = 1
while ok == 1: 
    # Nodrošina ieejas datu korektumu
    #  sk1, sk2 un sk3 ir naturāli skaitļi: katrs skaitlis>=1    
    sk1 = int (input('Ievadiet pirmo naturālu skaitli, skaitlis>=1: '))
    while sk1<1:
        sk1 = int(input('Kļūdaina vērtība, ievadiet skaitli>=1: '))
    sk2 = int (input('Ievadiet otro naturālu skaitli, skaitlis >=1: '))
    while sk2<1:
        sk2 = int(input('Kļūdaina vērtība, ievadiet skaitli>=1: '))
    sk3 = int (input('Ievadiet trešo naturālu skaitli, skaitlis>=1: '))
    while sk3<1:
        sk3 = int(input('Kļūdaina vērtība, ievadiet skaitli>=1: '))
        
    # Izmanto korektus sk1, sk2 un sk3: naturāli skaitļi (katrs skaitlis>=1)   
    if sk1 % 100 == 21 or sk2 % 100 == 21 or sk3 % 100 == 21:
        print ('Ir kāds "laimīgais skaitlis"')
    else: print('Nav neviena "laimīgā skaitļa"') 
    ok = int(input('Vai turpināt (1) vai beigt (0)? '))
 
'''      Testu plāns 
 skaitļi           paredzamais rezultāts
 21 1 13621       ir kāds laimīgais skaitlis
 12 21 12345      ir kāds laimīgais skaitlis
 23 7 143         nav neviena laimīgā skaitļa
 23 0             nekorekta vērtība
'''