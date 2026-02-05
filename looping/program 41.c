#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,sum,mul;
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        count++;
        n/=10;
    }
    n=temp;
    temp=n*n;
    mul=pow(10,count);
    sum=temp%mul;
    if(sum==n)
        printf("yes");
    else
        printf("no");
}