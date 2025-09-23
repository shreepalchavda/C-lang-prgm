#include <stdio.h>
  int main(){

      
    int digit,ld,fd,sum=0;
    
    printf("\nenter your Digit : ");
    scanf("%d",&digit);

    ld=digit%10;
    fd=digit/100;
    sum=ld+fd;

    printf("%d %d",ld,fd);
    printf("\nTotal Digits:%d",sum);
  }