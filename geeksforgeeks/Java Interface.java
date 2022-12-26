class testClass implements in1
{
    public int prime(int i){
       if(i==1)
       return 0;
       if(i==2 || i==3)
       return 1;
       if(i%2==0 || i%3==0)
       return 0;
       for(int j=5;j*j<=i;j+=6){
           if(i%j==0 || i%(j+2)==0)
           return 0;
       }
       return 1;
    }
    
    public void display(int k){   
        int c=0;
       for(int i=2;i<=k;i++){
           if(prime(i)==1)
           c++;
       }
    System.out.println(c);
    }
}