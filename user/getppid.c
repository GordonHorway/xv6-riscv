#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char **argv){

    // add return value for indication of failure??
    printf("parent process ID of getppid user command process %d\n", getppid());

    exit(0);
}