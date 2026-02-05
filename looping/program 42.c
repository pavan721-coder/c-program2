#include<stdio.h>
int main(){
    int num,a=0,b=1,c;;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        if(i<=1){
            c=i;
        }
        else{
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d ",c);
    }
}