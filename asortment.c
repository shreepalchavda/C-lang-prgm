#include <stdio.h>

int main()
{
    int row = 0, col = 0;
    int arr[100][100];
    int choice;

    printf("\nEnter 1 for Create Array");
    printf("\nEnter 2 for View Array");
    printf("\nEnter 3 for Update Array");
    printf("\nEnter 0 for Exit");

    while (1)
    {
        printf("\n\nEnter Your Choice :- ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nEnter No Of Rows for Array :- ");
            scanf("%d", &row);
            printf("\nEnter No Of Columns for Array :- ");
            scanf("%d", &col);

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    printf("Enter Element for [%d][%d] :- ", i, j);
                    scanf("%d", &arr[i][j]);
                }
            }
            printf("\nArray Created Successfully!");
        }
        else if (choice == 2)
        {
            if (row == 0 || col == 0)
            {
                printf("\nArray not created yet!");
            }
            else
            {
                printf("\nArray Elements are:\n");
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        printf("%d\t", arr[i][j]);
                    }
                    printf("\n");
                }
            }
        }
        else if (choice == 3)
        {
            if (row == 0 || col == 0)
            {
                printf("\nArray not created yet!");
            }
            else
            {
                int ur, uc;
                printf("\nEnter Row Index to Update :- ");
                scanf("%d", &ur);
                printf("Enter Column Index to Update :- ");
                scanf("%d", &uc);

                if (ur >= 0 && ur < row && uc >= 0 && uc < col)
                {
                    printf("Enter New Value :- ");
                    scanf("%d", &arr[ur][uc]);
                    printf("Value Updated Successfully!");
                }
                else
                {
                    printf("Invalid Row or Column index!");
                }
            }
        }
        else if (choice == 0)
        {
            printf("\nExiting...");
            break;
        }
        else
        {
            printf("Invalid Choice!");
        }
    }

    return 0;
}
