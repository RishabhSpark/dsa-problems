t = int(input())
for i in range(0,t):
    n,k=input().split()
    n=int(n) 
    k=int(k)
    arr_ele=input().split()
    arr=[]
    for i in arr_ele:
        ele = int(i)
        arr.append(ele)
    arr.sort()
    summ=0
    for i in range(0, k):
        summ+=arr[i]
    print(summ)
    # print(arr)