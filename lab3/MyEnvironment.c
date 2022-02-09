#include <stdio.h>

int main (int argc, char **argv, char **envp)
{
    for (char **env = envp; *env != 0; env++)
    {
        char *MyEnv = *env;
        printf("%s\n", MyEnv);
    }
    return 0;
}
