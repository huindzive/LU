negsum = 0
while True:
    sk = int(input("Ievadiet veselu skaitli, ievadi beidz tad, kad ievadīts skaitlis 0: "))
    if sk<0: negsum += sk
    if sk == 0:
        break
if negsum !=0:    # pārbauda, vai ir bijis kāds negatīvs skaitlis, un tāpēc ir
    print(negsum) # izmainīta negsum sākotnējā vērtība 0
else:
    print("Nevar aprēķināt negatīvo skaitļu summu, jo nav neviena negatīva skaitļa")
             