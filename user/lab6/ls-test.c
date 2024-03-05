#include <lib/string.h>
#include <lib/test.h>

int main(int argc, char const *argv[]) {
    
    int i;
    char *args = "ls ls";
    printf("output of ls:\n");
    if ((i = spawn(args)) < ERR_OK) {
        error(" ls-test: process exited with value %d", i);
    }
    int status;
    wait(i, &status);
    printf("correct output:\n");
    printf("ls                           2 19 27984\n");

    exit(0);
    return 0;
}
