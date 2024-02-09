#include <stdio.h>
#include <stdlib.h>

int choice = 0;

void menu(){
    printf("Do you want to make profit?\n");
    printf("choose an option = \n");
    printf("option\n1.-yes\n2.-no\n");
}

int main () {
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("going to the next menu ...\n");
            menu();
            printf("Enter your choice: "); 
            scanf("%d", &choice); 
            break;
        case 2:
            printf("closing the game ...\n");
            break;
        default:
            printf("select a right option!\n use 1 or 2!!!\n");
            break;
    }

    return 0;
}
