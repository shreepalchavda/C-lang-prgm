#include <stdio.h>

int main(){
    
    char ch='a';

    do{
        printf("\n%c",ch);
        ch++;
    }while(ch <= 'z');          
    return 0;
}