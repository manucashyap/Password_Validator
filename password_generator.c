#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char
    a[]="abcdefghijklmnopqrstuvwxyz",
    b[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int
    i,c[]={1,2,3,4,5,6,7,8,9,0},d;

void passgen()
{
    for(i=0;i<10;i++){ 
        switch(rand()%3){
        case 0:
            printf("\n%c",a[rand()%26]);
            break;
        case 1:
            printf("%c",b[rand()%26]);
            break;
        case 2:
            printf("%d",c[rand()%10]);
            break;
}}}

void pass_sym(){ 
    for(i=0;i<10;i++){
        d=33+rand()%94;
       printf("%c",d);
    }
}

void main()
{
    srand(time(NULL));
    pass_sym();
    passgen();
}
