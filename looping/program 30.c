#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        int rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("%d",sum);
}