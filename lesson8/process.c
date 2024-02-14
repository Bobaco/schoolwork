#include "processes.h"
#include <stdio.h>
#include <string.h>

static int generateUniqueId(void) {
    static int idCounter = 1;
    return (idCounter <= MAX_PROCESSES) ? idCounter++ : 0;
}

int nextProcessId(void) {
    return generateUniqueId();
}

int createNewProcess(const char *name) {
    if (processesCount < MAX_PROCESSES) {
        int processId = nextProcessId();
        if (processId != 0) {
            Process newProcess = {processId, ""};
            strncpy(newProcess.name, name, MAX_NAME_LENGTH);
            processes[processesCount++] = newProcess;
            return processId;
        }
    }
    return 0;
}

void stopProcess(int processId) {
    for (int i = 0; i < processesCount; ++i) {
        if (processes[i].id == processId) {
            for (int j = i; j < processesCount - 1; ++j) {
                processes[j] = processes[j + 1];
            }
            processesCount--;
            return;
        }
    }
}

