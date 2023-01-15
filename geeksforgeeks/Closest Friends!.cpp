def closestFriends(arr,n):
    l = []
    for i in range(n):
        k = -1
        a = arr[i]
        for j in range(i-1, -1, -1):
            if arr[j] < a:
                k = j
                break
        l.append(k)
    return l