#include <stdio.h>
#include <stdlib.h>
#include "TICTACTOE.h"

char s[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int check();
void board();

int main()
{
    int p = 1, i, choice;
    char mark;
    char ctn;
    scanf("Do you Wish to Continue (y/n) = %c",&ctn);
    switch (ctn){
        case 'y':{
            do
            {
                board();
                p = (p % 2) ? 1 : 2;
                printf("Player %d - ", p);
                scanf("%d", &choice);
                mark = (p == 1) ? 'X' : 'O';
                if (choice == 1 && s[1] == '1')
                    s[1] = mark;
                else if (choice == 2 && s[2] == '2')
                    s[2] = mark;
                else if (choice == 3 && s[3] == '3')
                    s[3] = mark;
                else if (choice == 4 && s[4] == '4')
                    s[4] = mark;
                else if (choice == 5 && s[5] == '5')
                    s[5] = mark;
                else if (choice == 6 && s[6] == '6')
                    s[6] = mark;
                else if (choice == 7 && s[7] == '7')
                    s[7] = mark;
                else if (choice == 8 && s[8] == '8')
                    s[8] = mark;
                else if (choice == 9 && s[9] == '9')
                    s[9] = mark;
                else
                {
                    printf("Invalid move ");
                    p--;
                }
                i = check();
                p++;
            }while (i ==  - 1);
            board();
            if (i == 1)
                printf("==>\aPlayer %d win ", --p);
            else
                printf("==>\aGame draw");
        }
        break;
        case 'n' :exit(0);
    }
    return 0;
}

