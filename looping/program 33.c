#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        count++;
        n=n/10;
    }
    n=temp;
    int sum=0,mul=1;
    while(n!=0){
        int rem=n%10;
        mul=pow(rem,count);
        sum+=mul;
        n=n/10;
    }
    if(sum==temp){
        printf("armstrong number");
    }
    else
    printf("not an armstrong number");
}