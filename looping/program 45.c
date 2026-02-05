#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=1;j<n;j++){
            if(i%j==0)
            count++;
        }
        if(count==2){
            printf("%d",i);
        }
    }
}