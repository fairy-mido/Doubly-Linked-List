#include <stdio.h>
#include <stdlib.h>
#include "Double_LL.h"


int main(void)
{
    int i, choice, exit_code;
    
    while (1)
    {
        printf("---------------------------------------------------------------------\n");
        printf("1- Create List   2- Insert Node    3- Delete Node 4- Search for Data\n");
        printf("---------------------------------------------------------------------\n");
        printf("5- Read Data by ID      6- Read Data By Pos     7- Change Data By ID\n");
        printf("---------------------------------------------------------------------\n");
        printf("8- Change Data By Pos   9- List Size       10- Display List Elements\n");
        printf("---------------------------------------------------------------------\n");
        printf("\t\t      11- Exit Whole Code\n");
        printf("---------------------------------------------------------------------\n");
        printf("Enter Number Preceeding the Operation you want to execute : ");
        while (1)
        {
            scanf("%d", &choice);
            printf("--------------------------------------------------\n");
            printf("--------------------------------------------------\n");
            if ((choice > 11) || (choice < 0))
            {
                // Nothing
                printf("Please, Enter The Correct Choice!\n");
            }
            else
            {
                break;
                // Correct Choice
            }
        }
        exit_code = User_Choice(choice);
        if (exit_code == Exit_Code_Choice)
        {
            break;
        }
    }
    printf("End Of Code.... :>");
    return 0;

    return 0;
}