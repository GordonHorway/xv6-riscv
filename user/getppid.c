#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char **argv){

    int ppid = getppid();

    // add return value for indication of failure??
    if(ppid >= 0){
    printf("parent process ID of getppid user command process %d\n", ppid);
    } else {
        fprintf(2, "There was an error getting the ppid of the current process!\n");
        exit(1);
    }

    exit(0);
}