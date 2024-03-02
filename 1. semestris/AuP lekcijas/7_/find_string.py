#********************************************************************
#find_string. Dota simbolu virkne v. Atrast pirmo pozīciju (0,1 utt.), 
#kurā atrodas simbols s virknē v.
#Ja simbols s nav atrasts, tad atgriezt negatīvu vērtību (-1).
#*******************************************************************/
#Autors: Uldis Straujums
#Izveidota: 19.10.2020.

#**************************************************
#Funkcija find(v, s) atrod pirmo pozīciju,
#kurā atrodas simbols s simbolu virknē v.
#Ja nav atrasts, tad atgriež negatīvu vērtību (-1).
#*************************************************/
def find(v, s):
    for i in range(len(v)):
        if v[i]==s: return i;
    return -1;

ok = 1
while ok:
    virkne = input("Ievadiet simbolu virkni: ")
    print(virkne)
    print(find(virkne,'i'))
    print(find(virkne,'B'))
    print(find(virkne,'b'))
    ok = int(input("Vai turpināt (1) vai beigt (0)?"))

#***** Testu plāns ********************************
#virkne                s   paredzamais rezultāts
#Biezpiena pilieni     i    1
#                      B    0
#                      b   -1
#te ir balts           i    3
#                      B   -1
#                      b    6
#**************************************************/