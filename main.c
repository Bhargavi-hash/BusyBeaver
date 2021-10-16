#include "busyBeaver.h"

int main()
{
    system("clear");
    
    char play = 'Y';
    char stop = 'N';

    char input;

    printf("--- Do you want to look at the 3-state 2-symbol busy beaver ? \n");
    printf("--- Enter 'Y' to start and 'N' to exit\n");
    printf("--- (Y/N): ");

    scanf("%c", &input);

    if(input != play)
    {
        printf("\033[1;32m");
        printf("\n\n\t\t\t\t\033[1;31mThank You :)\033\n\n");
        printf("\033[0m");   

        return 0;
    }
    
    Game();

    printf("\033[1;32m");
    printf("\n\n\t\t\t\t\033[1;31mThank You :)\033\n\n");
    printf("\033[0m");   

    return 0;
}
