// Compile:
//  $ gcc myenv.c -o myenv

#include <unistd.h>

extern char **environ;

int main()
{
    char *argv[2];
    argv[0] = "/usr/bin/env";
    argv[1] = NULL;

    execve(argv[0], argv, NULL);

    return 0;
}
