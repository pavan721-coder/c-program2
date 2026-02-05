#include <stdio.h>
#include <ctype.h>
int main()
{
    char a,b;
    scanf("%c",&a);
    a=toupper(a);
    switch(a){
        case 'E':printf("excellent");break;
        case 'V':printf("very good");break;
        case 'G':printf("good");break;
        case 'A':printf("average");break;
        case 'F':printf("fail");break;
        default :printf("invalid");break;
    }
    
}