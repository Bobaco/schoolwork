#include "processes.h"
#include <stdio.h>

void displayProcesses(void) {
    printf("Processes:\n");
    for (int i = 0; i < processesCount; ++i) {
        printf("ID: %d, Name: %s\n", processes[i].id, processes[i].name);
    }
    printf("\n");
}

int main(void) {
    int choice;
    char name[MAX_NAME_LENGTH + 1];
    int processId;

    do {
        printf("settings:\n");
        printf("1.create Process\n");
        printf("2.show Processes\n");
        printf("3.stop Process\n");
        printf("4.xit Program\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("enter process name: ");
                scanf("%s", name);
                int createdProcessId = createNewProcess(name);
                if (createdProcessId != 0) {
                    printf("process created successfully. ID: %d\n", createdProcessId);
                } else {
                    printf("error: Maximum number of running processes reached.\n");
                    printf("to create a new process, stop one of the running processes.\n");
                }
                break;
            case 2:
                displayProcesses();
                break;
            case 3:
                printf("enter process ID to stop: ");
                scanf("%d", &processId);
                stopProcess(processId);
                break;
            case 4:
                printf("exiting program.\n");
                break;
            default:
                printf("invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}
