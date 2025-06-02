#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char **argv){

    if(argc > 1){
        fprintf(2, "command usage: history\n");
        exit(1);
    }

    char *args[] = {"cat", "sh_history", 0};

    if(exec(args[0], args) < 0){
        fprintf(2, "exec failure\n");
        exit(1);
    }

    return 0;
}