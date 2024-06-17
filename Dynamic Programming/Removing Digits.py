n=int(input())
 
 
ct=0
 
while n>0:
 
    s=str(n)
    t=-1
 
    for ss in s:
        t=max(int(ss),t)
 
    n-=t
    ct+=1
 
print(ct)
 
 
 
