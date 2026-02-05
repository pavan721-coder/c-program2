#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int n1=a;
    int n2=b;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    int lcm=(n1*n2)/a;
    printf("%d %d",a,lcm);
}