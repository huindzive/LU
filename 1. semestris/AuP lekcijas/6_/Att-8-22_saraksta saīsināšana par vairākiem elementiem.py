aa = [1,2,3,4,5,6]
del aa[2] # izdzēš vienu elementu
print(aa)
aa = [1,2,3,4,5,6]
del aa[2:5] # izdzēš intervālu
print(aa)
aa = [1,2,3,4,5,6]
del aa[2:5:2] # izdzēš intervālu specializēti (katru otro)
print(aa)