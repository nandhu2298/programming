n=int(input())

s=0
su=0
while(n):
    r=n%10
    s=s+r;
    n=n//10

a=s
while(s):
    r=s%10
    su=r+su*10;
    s=s//10



if(a==su):
    print("yes")
else:
    print("no")
