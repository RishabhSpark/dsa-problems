class Solution{
public:
    int isPrime(int N){
        // code here
        int is_prime = 1;
        if(N==1) return 0;
        for(int i=2; i<=N/i; i++){
            if(N%i==0) is_prime=0;
        }
        return is_prime;
    }
};


// class Solution{
// public:
//     int isPrime(int N){
//         // code here
//         int is_prime = 1;
//         if(N==1) return 0;
//         for(int i=2; i*i<=N; i++){
//             if(N%i==0) is_prime=0;
//         }
//         return is_prime;
//     }
// };