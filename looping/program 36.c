#include<stdio.h>
int main(){
    int n,isprime=1;
    scanf("%d",&n);
    if(n<2){
        isprime=0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime){
        printf("prime");
    }
    else
    printf("not a prime");
}