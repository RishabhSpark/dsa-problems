#code
t = int(input())
for i in range(0,t):
    s = input()
    summ=0
    prod=0
    ans=0
    for i in range(len(s)):
        summ+=int(s[i])
        prod*=int(s[i])
        ans=max(summ,prod)
        summ=prod=ans;
    print(ans)