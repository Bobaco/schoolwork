#ifndef PROCESSES_H
#define PROCESSES_H

#define MAX_PROCESSES 5
#define NAME_LENGTH 30

typedef struct {
    int id;
    char name[NAME_LENGTH + 1]; 
} Process;

extern Process processes[MAX_PROCESSES];
extern int processesCount;

int nextProcessId(void);
int createNewProcess(const char *name);
void stopProcess(int processId);

#endif
