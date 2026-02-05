#include<stdio.h>
int main(){
    int n,sum=1;
    scanf("%d",&n);
    int fact;
    while(n!=0){
        sum*=n;
        n--;
    }
    printf("%d",sum);
}