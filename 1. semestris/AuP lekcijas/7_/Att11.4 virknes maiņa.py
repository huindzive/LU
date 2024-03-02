# Att.11.4 Virknes maiņa
s = 'Hello'
t = s # tā ir tā pati simbolu virkne, pieejama no cita mainīgā
print(t is s) # vai abi mainīgie norāda uz vienu objektu - jā
s += ', World!' # tagad s jau ir cita virkne, nevis pamainīta vecā
print(t is s) # vai abi mainīgie norāda uz vienu objektu - nē
print(s)
print(t)