#include <stdio.h>
#define MAX_ROOMS 8
void switchLights(unsigned char *rooms, int roomNumber) {
    if (roomNumber < 1 || roomNumber > MAX_ROOMS) {
        printf("Invalid room number. Please enter a number between 1 and 8.\n");
        return;
    }

    
    *rooms ^= (1 << (roomNumber - 1));
}

void printState(unsigned char rooms) {
    printf("The light is on in rooms:");

    for (int i = 0; i < MAX_ROOMS; ++i) {
        if ((rooms & (1 << i)) != 0) {
            printf(" %d", i + 1);
        }
    }

    printf("\n");
}

int main() {
    unsigned char rooms = 0;

    int choice;
    int roomNumber;

    do {
        printf("Options:\n");
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter room number (1 to 8): ");
                scanf("%d", &roomNumber);
                switchLights(&rooms, roomNumber);
                break;
            case 2:
                printState(rooms);
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}
