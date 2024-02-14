all: taskmanager.exe

taskmanager.exe: taskmanager.o processes.o
    gcc -o taskmanager.exe taskmanager.o processes.o

taskmanager.o: taskmanager.c processes.h
    gcc -c taskmanager.c

processes.o: processes.c processes.h
    gcc -c processes.c

clean:
    del taskmanager.exe taskmanager.o processes.o