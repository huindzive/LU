#  For cikls, kas izpilda cikla ķermeni tieši n reizes

print("Saskaita n veselus skaitļus")
n = int(input("Ievadiet skaitļu skaitu n: "))
sum = 0;
for i in range(n):
   sk = int(input("Ievadiet veselu skaitli: "))
   sum+=sk;

print("Summa: ", sum)

