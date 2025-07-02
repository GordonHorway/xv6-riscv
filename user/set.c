#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char **argv){

    if(argc != 3){
        fprintf(2, "command usage: set [pid] [priority]\n");
        exit(1);
    }

    int pid = atoi(argv[1]);
    int priority = atoi(argv[2]);

    int setret = set(pid, priority);

    if(setret == -1){
        fprintf(2, "priority number must be between 0 and 9 (inclusive)\n");
        exit(1);
    }

    if(setret == -2){
        fprintf(2, "pid does not exist\n");
        exit(1);
    }

    exit(0);
}