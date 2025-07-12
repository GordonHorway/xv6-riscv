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

    int isNegative = (argv[2][0] == '-');

    if(priority > 9 || isNegative){
        fprintf(2, "select priority from 0-9 (inclusive)\n");
        exit(1);
    }

    if(set(pid, priority) < 0){
        fprintf(2, "invalid pid used in set command\n");
        exit(1);
    }

    exit(0);
}