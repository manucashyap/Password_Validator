#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h> 
void gen();
void passgen();
void pass_sym();   
   int main( )
   {int i;      
   int l=5,h=15,v=1; 
   char n[10] = "0123456789";    
   char c[] = "!@#$%^&*)(";
   char password[h+1];
   printf("Enter the password:\t");
    scanf("%s",password);    
if((strlen(password)>h)||(strlen(password)<l))
                {
                v=0; }
                char *temp = password;
if (strpbrk(temp,n) == NULL){
                v = 0;}
          temp = password;
if (strpbrk(temp,c) == NULL){
                v = 0;}
                for(i=0; password[i] != '\0'; i++)
                {
    if(password[i] == ' ')
    {
            v=0;
            break;}
                  }    
    (v)? printf("Cool!!!You entered the strong password. I hope your password would be safe.") 
    : printf("Oops!!!I guess, your password is weak or invalid.\n\nYou should type\n1. at least 5 words.\n2. less than 15 words.\n3. at least 1 or 2 special characters.\n4. at least 1 number.\n\nexample : ");
    gen();
    return 0;
    }
    


void passgen()
{char
    a[]="abcdefghijklmnopqrstuvwxyz",
    b[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int
    i,c[]={1,2,3,4,5,6,7,8,9,0},d;
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

void pass_sym()
{
 
int i,d;
    for(i=0;i<10;i++){
        d=33+rand()%94;
       printf("%c",d);
    }
}

void gen()
{
    srand(time(NULL));
    pass_sym();
    passgen();
}
