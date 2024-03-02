def skaitlaveids(a):
    print(a, end=': ') 
    if a%2==0:
        if a > 0: print('Pozitīvs pāra skaitlis')
        else: print('Nepozitīvs pāra skaitlis') 
    elif a>0: print('Pozitīvs nepāra skaitlis')
    else: print('Nepozitīvs nepāra skaitlis')
    
skaitlaveids(8)
skaitlaveids(-8)
skaitlaveids(7)
skaitlaveids(-7)
skaitlaveids(0)   