#################################################
# Artūrs Balnass ab23183
# B22. Sastādīt programmu, kura reizina un dala racionālus skaitļus, racionālos skaitļus uzdodot kā divu veselu skaitļu pāri 
# (1/3 tiek uzdota kā divi skaitļi 1 un 3). Rezultātam jābūt kā nesaīsināmam daļskaitlim. Risinājumā izmantot funkciju, 
# kas reizina divus racionālus skaitļus un funkciju, kas pārveido racionālu skaitli par nesaīsināmu daļskaitli.
# Programma veidota 01.11.2023
#################################################

# def vienkarsot(dalamais, dalitajs)
# funkcija vienkarsot(dalamais, dalitajs)
# atgriež dalījumu starp dalamais un kopigais; dalitajs un kopigais

# def reizinasana(num1, denom1, num2, denom2)
# funkcija reizinasana(num1, denom1, num2, denom2)
# atgriež kā rezultātu daļskaitli kas ir skaitļu num1/denom1 un num2/denom2 reizinājums

# def dalisana(num1, denom1, num2, denom2)
# funkcija dalisana(num1, denom1, num2, denom2)
# atgriež kā rezultātu daļskaitli kas ir skaitļu num1/denom1 un num2/denom2 dalijums


from math import gcd

# funkcija, kas pārveido racionālu skaitli par nesaīsināmu daļskaitli.
def vienkarsot(dalamais, dalitajs):
    kopigais = gcd(dalamais, dalitajs)
    return dalamais // kopigais, dalitajs // kopigais

# Funkcija, kas sareizina divus racionālus skaitļus un pārveido iegūto racionālu skaitli par nesaīsināmu daļskaitli.
def reizinasana(num1, denom1, num2, denom2):
    result_num = num1 * num2
    result_denom = denom1 * denom2
    result_num, result_denom = vienkarsot(result_num, result_denom)
    return result_num, result_denom

# Funkcija, kas sadala divus racionālus skaitļus un pārveido iegūto racionālu skaitli par nesaīsināmu daļskaitli.
def dalisana(num1, denom1, num2, denom2):
    result_num = num1 * denom2
    result_denom = denom1 * num2
    result_num, result_denom = vienkarsot(result_num, result_denom)
    return result_num, result_denom


while True:
# Lietotājs ievada pirmo racionālo skaitli, kļūdas kārtā tiek velreiz prasīta ievade abiem parametriem
    while True:
        try:
            num1 = int(input("Ievadi pirmā skaitļa dalāmo: "))
            denom1 = int(input("ievadi pirmā skaitļa dalītāju: "))
            if denom1 == 0: # tiek pārbaudīt vai dalītājs ir 0
                print("dalītājs nevar būt 0.")
            else:
                break
        except ValueError:
            print("Nepareizi ievadīti dati, tiek sagaidīti tikai skaitļi")

    # Lietotājs ievada otro racionālo skaitli, kļūdas kārtā tiek velreiz prasīta ievade abiem parametriem
    while True:
        try:
            num2 = int(input("Ievadi otrā skaitļa dalāmo: "))
            denom2 = int(input("ievadi otrā skaitļa dalītāju: "))
            if denom2 == 0:  # tiek pārbaudīt vai dalītājs ir 0
                print("dalītājs nevar būt 0.")
            else:
                break
        except ValueError:
            print("Nepareizi ievadīti dati, tiek sagaidīti tikai skaitļi")

    mul_num, mul_denom = reizinasana(num1, denom1, num2, denom2)  # tiek izsaukta reizināšanas funkcija un tiek norādīti maiņigie ar noteiktajām vērtībām
    div_num, div_denom = dalisana(num1, denom1, num2, denom2)  # tiek izsaukta dalīšanas funkcija un tiek norādīti maiņigie ar noteiktajām vērtībām

    print("Abu skaitļu reizinājums: {}/{}".format(mul_num, mul_denom)," | ","Abu skaitļu dalījums: {}/{}".format(div_num, div_denom))  # Tiek izvadīts reizinājums un dalījums
    ok = int(input("Vai turpināt (1) vai beigt (0)? "))
    if ok !=1:
        break

################################### testa piemēri ###########################
#  ievade               izvade
#  1 2 4 5              Abu skaitļu reizinājums: 2/5  |  Abu skaitļu dalījums: 5/8
#  -1 4 -9 45           Abu skaitļu reizinājums: 1/20  |  Abu skaitļu dalījums: -5/-4
#  -1 0 4 5             "dalītājs nevar būt 0." , "Ievadi pirmā skaitļa dalāmo: "
#  -1 1 45 0            "dalītājs nevar būt 0." , "Ievadi otrā skaitļa dalāmo: "
#  hdhj 5 14 8          "Nepareizi ievadīti dati, tiek sagaidīti tikai skaitļi", "Ievadi pirmā skaitļa dalāmo: "

############################################################################