def toggleTheMiddle(n):
    #Your code here
    n_bin = bin(n)[2:]
    n_bin_arr = list(n_bin)
    n_bin_len = len(n_bin)
    
    if(len(n_bin)%2==1):
        if(n_bin_arr[(n_bin_len+1)//2-1]=='0'):
            n_bin_arr[(n_bin_len+1)//2-1]='1'
        elif(n_bin_arr[(n_bin_len+1)//2-1]=='1'):
            n_bin_arr[(n_bin_len+1)//2-1]='0'
            
    else:
        if(n_bin_arr[(n_bin_len+1)//2]=='0'):
            n_bin_arr[(n_bin_len+1)//2]='1'
        elif(n_bin_arr[(n_bin_len+1)//2]=='1'):
            n_bin_arr[(n_bin_len+1)//2]='0'
            
        if(n_bin_arr[(n_bin_len+1)//2-1]=='0'):
            n_bin_arr[(n_bin_len+1)//2-1]='1'
        elif(n_bin_arr[(n_bin_len+1)//2-1]=='1'):
            n_bin_arr[(n_bin_len+1)//2-1]='0'
    
    ans = ''.join(n_bin_arr)
    return int(ans,2);