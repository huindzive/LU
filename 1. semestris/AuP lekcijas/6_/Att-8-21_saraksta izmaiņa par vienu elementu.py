aa = [1,2,3,4,6,5,6]
aa.append('Added'); # pievieno beigās
print(aa)
out = aa.pop() # izmet no beigām
print(out,aa)
out = aa.pop(1) # izmet 1. no kreisās
print(out,aa)
aa.insert(3,'Hello') # ieievieto pirms 3. no kreisās
print(aa)
aa.remove(6) # Elementa izmešana pēc vērtibas
print(aa) # remove izmet tikai pirmo pēc dotās vērtības