n=int(input())
 
rg=2**n
 
rs=rg*[""]
 
rf=['0','1','1','0']
 
 
 
while(True):
 
    ct=0
 
    mk=False
 
    while ct<rg:
 
      for i in range(len(rf)):
         
        for c in rf[i]:
 
           rs[ct]=c+rs[ct]
 
           ct+=1
 
           if(ct==rg):
              mk=True
              break
        if mk:
           break
 
    if(len(rf[0])==2**(n-1)):
       
       break
 
    for i in range(len(rf)):
       
       rf[i]+=rf[i]
 
for h in rs:
   
   print(h)
