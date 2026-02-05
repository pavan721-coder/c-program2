#include<stdio.h>
int fact(int n){
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main(){
    int num,sum=0;
    scanf("%d",&num);
    int temp=num;
    while(num!=0){
        int rem=num%10;
        sum+=fact(rem);
        num/=10;
    }
    if(sum==temp){
        printf("strong number");
    }
    else{
        printf("not a strong number");
    }
    
}