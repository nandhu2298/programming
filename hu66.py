N=input()
x=input().split()
p=input()
c=0
for i in x:
   if(i[:2]==p):
      c=c+1
print(c)
