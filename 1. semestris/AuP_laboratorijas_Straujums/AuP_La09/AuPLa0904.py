# AuPLa0804.py
'''
Uldis Straujums, us22011 
AuPLa0804. Izveidot Python funkciju, kas aprēķina virknes n-to locekli. 
Virkne uzdota ar sakarību:
v0 = 2; v1 = 3;
vn = 4*vn-1 + 3*vn-2;
Izveidot Python programmu, kas izsauc izveidoto funkciju.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 22.10.2019.
'''
'''
Funkcija virkne(n)  
 aprēķina virknes n-to locekli.
 Virkne uzdota ar sakarību:
 v0 = 2; v1 = 3;
 vn = 4*vn_1 + 3*vn_2;
 Atgriež kā rezultātu virknes n-to locekli.
'''
def virkne(n):   
    vk_2=2;
    vk_1=3;
    if n == 0: return 2;
    if n == 1: return 3;
    for i in range(2, n+1):
        vk   = 4*vk_1 + 3*vk_2;
        vk_2 = vk_1;
        vk_1 = vk;
    return vk;    
      
print("Aprēķina virknes n-to locekli")
ok = 1
while ok == 1:
    n = int(input("Ievadiet virknes locekļa numuru n, n>=0: ")) 
    while n<0:
        n = int(input("Kļūdaina vērtība. Jāievada virknes locekļa numurs n, n>=0: ")) 
  
    print(f'Virknes {n}.loceklis ir {virkne(n)}')   
    ok = int(input(" Vai turpināt (1) vai beigt (0)? "))

'''     Testu plāns 
  n     paredzamais rezultāts
  0       2
  1       3
  2       18
  3       81
 -1      jāievada n>=0
'''
