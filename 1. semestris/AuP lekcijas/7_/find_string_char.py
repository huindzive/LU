#**************************************************************************
#find_string_char. Dota simbolu virkne v. Atrast pirmo pozīciju (0,1 utt.), 
#kurā atrodas ievadītais simbols s virknē v.
#Ja simbols s nav atrasts, tad atgriezt negatīvu vērtību (-1).
#*************************************************************************/
#Autors: Uldis Straujums
#Izveidota: 18.10.2021.

#*****************************************************
#Funkcija find(v, s) atrod pirmo pozīciju (0, 1, ...),
#kurā atrodas simbols s simbolu virknē v.
#Ja nav atrasts, tad atgriež negatīvu vērtību (-1).
#****************************************************/
def find(v, s):
    for i in range(len(v)):
        if v[i]==s: return i;
    return -1;

ok = 1
while ok:
    virkne = input("Ievadiet simbolu virkni: ")
    print(virkne)
    c = input("Ievadiet meklējamo simbolu: ")
    print(find(virkne, c))
    ok = int(input("Vai turpināt (1) vai beigt (0)?"))

#***** Testu plāns ********************************
#    virkne             c   paredzamais rezultāts
# Biezpiena pilieni     i    1
# Biezpiena pilieni     B    0
# Biezpiena pilieni     ' '  9
# Biezpiena pilieni     b   -1
#**************************************************/