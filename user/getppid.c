#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char **argv){

    int ppid = getppid();

    printf("parent process ID of getppid user command process %d\n", ppid);

    exit(0);
}