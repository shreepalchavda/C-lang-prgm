#include <stdio.h>

int main() {
    
    printf("only ABCD\n\n");

    // ABCD
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= 5; i++) {

        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);  
        }
        printf("\n"); 
    }

    printf("only numbers\n\n");

    // numbers 

     int b;

    printf("Enter number of rows: ");
    scanf("%d", &b);

    for (int i = 1; i <= 5; i++) {

        for (int j = 1; j <= i; j++) {
            printf("%c ", '1' + j - 1);  
        }
        printf("\n"); 
    }

    printf("left half triangle ABCD\n\n");

    //left half triangle ABCD

     int a;
   
    printf("Enter number of rows: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
    
        for (int space = a; space > i; space--) {
            printf("  "); 
        }

        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n"); 
    }

    printf("left half triangle number\n\n");

    // left half triangle number

     int c;
   
    printf("Enter number of rows: ");
    scanf("%d", &c);

    for (int i = 1; i <= c; i++) {
    
        for (int space = c; space > i; space--) {
            printf("  "); 
        }

        for (int j = 1; j <= i; j++) {
            printf("%c ", '5' + j - 1);
        }

        printf("\n");  
    }

    // inverted left half triangle

    printf("inverted left half triangle\n\n");

    int e;

    printf("Enter number of rows: ");
    scanf("%d", &e);

    for (int i = e; i >= 1; i--) {

        for (int space = e; space > i; space--) {
            printf("  "); 
        }

        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n"); 
    }

    // inverted right half triangle

    printf("inverted right half triangle\n\n"); 

    int d;

    printf("Enter number of rows: ");
    scanf("%d", &d);

    for (int i = d; i >= 1; i--) {
 
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'H' + j - 1);
        }

        printf("\n");
    }

    // full pyramid 

    printf("full pyramid\n\n"); 

    int h, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &h);

    for(i = 1; i <= h; i++) {

     
        for(space = 1; space <= h - i; space++) {
            printf(" ");
        }

        for(j = 1; j <= (2 * i - 1); j++) {
            printf("5");
        }

        printf("\n");
    }

     // custom pattern

     printf("custom pattern");

    int r, m;

    for(r = 1; r <= 5; r++) {
        for(m = 1; m <= 5; m++) {

            if(r == 1 || r == 3 || (r == 2 && (m == 1 || m == 5)))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    for(r = 1; r <= 2; r++) {
        printf("*\n");
    }

    return 0;
}
