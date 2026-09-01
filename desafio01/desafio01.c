#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    unsigned char lockers =0, choice;

    while (1)
    {
        puts("Current state of the lockers: ");
        for (int i = 7; i >= 0; i--)
        {
            int bit = (lockers >> i) & 1;
            printf("%d", bit);
        }
            printf("\n");

        puts("------------WELLCOME------------");
        puts("Option 1: Ocupy a random locker");
        puts("Option 2: Chose a locker to free");
        puts("Option 3: Exit the system");
        puts("------------WELLCOME------------");
        scanf("%hhu", &choice);

        switch (choice)
        {
        case (1):
           do
           {
            choice = 1 << rand()%8;
           } while ((choice | lockers) == lockers);
           lockers = (choice | lockers);
            break;

        case (2):
          for (int i = 7; i >= 0; i--)
        {
            int bit = (lockers >> i) & 1;
            printf("%d", bit);
        }
            printf("\n");
            puts("Select the number of the locker you want to free: ");
            scanf("%hhu", &choice);
            choice = ~(1 << (choice - 1));
            lockers = lockers & choice;
        break;

        case (3):
        exit(EXIT_SUCCESS);
        default:
            break;
        }
    }
    

return 0;
}