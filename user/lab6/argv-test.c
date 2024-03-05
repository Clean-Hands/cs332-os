#include <lib/test.h>

int main(int argc, char const *argv[]) {
    
    int i;
    char *args = "argv-test-helper these are some arguments that we want to pass in";
    if ((i = spawn(args)) < ERR_OK) {
        error(" argv-test: process exited with value %d", i);
    }

    pass("argv-test");

    exit(0);
    return 0;
}
