#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

#define NULL 0L

int main(int argc, char *argv[]){

    if(argc < 2){
        write(2, "usage: exectime command argument-list\n", 39);
        exit(1);
    }

    char *args[argc];

    for(int i = 0; i < argc - 1; i++){
        args[i] = argv[i + 1];
    }

    args[argc - 1] = NULL;

    int pid = fork();

    if(pid == -1){
        write(2, "fork failed...\n", 16);
        exit(1);
    }

    int start = 0, stop = 0;

    if(pid == 0){
        start = uptime();
        printf("uptime: %d\n", start);
        int ret = exec(args[0], args); // why args[0]??
        if(ret == -1){
            write(2, "exec failed...\n", 16);
            exit(1);
        }
    }

    wait(NULL);

    stop = uptime();
    printf("uptime: %d\n", stop);

    exit(0);
}
