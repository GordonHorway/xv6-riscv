#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char **argv){

    char *args[] = {"cat", "sh_history", 0};

    exec(args[0], args);

    return 0;
}