#include <stdio.h>

int main() {
    int num,count=0;
    printf("\nenter your Digit : ");
    scanf("%d",&num);
    do{
        num=num/10;
        count++;
    }while(num>=1);
    
    printf("\nTotal Digits : %d",count);
   
}