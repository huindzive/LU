# Att.12.26_dazadi parametru tipi.py
def fun(a,b,*ss,x=1,y=2,**dd):
    print(a,b) # pozicionālie parametri
    for e in ss: # parametru saraksts
        print(e,end=' ')
    print()
    print(x,y) # neobligātie nosauktie parametri
    for k in dd: # parametru vārdnīca
        print((k,dd[k]),end=' ')
    print()

fun('alpha','beta',1,2,3,x=11,i=100,j=200)
print('************************')
fun(1,2,3,y=22,i=100,j=200)
print('************************')
fun(1,2,3,i=100,j=200)
print('************************')
fun('alpha','beta',x=11,y=22,i=100,j=200)