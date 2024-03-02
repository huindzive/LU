import copy
aa = [1,2,3,4,5]
bb = list(aa)
cc = aa[:]
dd = copy.deepcopy(aa)
ee = aa # Nav kopēšana! ee norāda uz to pašu sarakstu
aa[2] = 999 # mainām aa, lai saprastu, vai tas tika kopēts
print(bb)
print(cc)
print(dd)
print("Tas pats aa, nevis kopija:", ee)
ee[0] = 17
print(ee)