#include<stdio.h>
int main(){
    int n,esum=0,osum=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i%2==0){
            esum+=i;
        }
        else
        osum+=i;
    }
    printf("%d %d",esum,osum);
}