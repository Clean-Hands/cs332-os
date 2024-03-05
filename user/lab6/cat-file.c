#include <lib/test.h>
#include <lib/string.h>

int main(int argc, char const *argv[])
{
    char *args = "cat README";
    char *content = "*************************************************\n***OSV, the Ultimate Teaching Operating System***\n*************************************************";
    int i;
    
    printf("output of cat:\n");
    if ((i = spawn(args)) < ERR_OK){ 
        error(" cat-file: process exited with value %d", i);
    }

    int status;
    wait(i, &status);

    printf("correct output:\n%s\n", content);

    exit(0);
    return 0;
}
