#include<stdio.h>
#include<math.h>
int main(){
    int n,a;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        a=pow(2,i);
        if(a>n)
            return 0;
        printf("%d",a);
        
    }
}