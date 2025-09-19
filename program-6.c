#include <stdio.h>

int main(){

    int mark;
    char grade;

    printf("Enter your mark : ");
    scanf("%d", &mark);
    

    if( mark>=85){
        grade='A';
        printf("\nYeahh 'You are passed with A grade...'",grade);
    }

    else if( mark>=70){
        grade='B';
        printf("\n Congratulation 'You are passed with B grade...'",grade);
    }

    else if(mark>=60){
        grade='C';
        printf("\nCongratulation 'You are passed with C grade...'",grade);
    }

    else if(mark>=50){
        grade='D';
        printf("\nGood but 'you are passed with D grade...",grade);
    }

    else if(mark>=35){
        grade='E';
        printf("\nYou are at the passing line ");
    }
    else if (mark < 35){ 
        grade='F';
        printf("\n Opps 'You are  Failed..'");
    }

    else{
        printf("\nInvaild....");
    }
    

    switch (grade)
    {
        case 'A':
            printf("\nExellent..!");
            break;

        case 'B':
            printf("\nVery good..!");
            break;

        case 'C':
            printf("\nEverage..!");
            break;

        case 'D':
            printf("\nDo Work hard..!");
            break;

        case 'E':
            printf("\nFailed..!");
            break;
        
        default :
            printf("\n wrong input");
            break;
    }

        if (grade=='F'){
            printf("\nYou are not eligible For next level.");
        }
        else if (grade == 'A'){
            printf("\nYou are eligible for next level. ");
        }
        else if (grade == 'B'){
            printf("\nYou are eligible for next level. ");
        }
        else if (grade == 'C'){
            printf("\nYou are eligible for next level. ");
        }
        else if (grade == 'D'){
            printf("\nYou are eligible for next level. ");
        }
        else if (grade == 'E'){
            printf("\nYou are eligible for next level. ");
        }
        else {
            printf("\n You enter wrong input ");
        }
        
}