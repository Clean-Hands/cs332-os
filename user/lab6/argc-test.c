#include <lib/test.h>

int main(int argc, char const *argv[]) {
    
    int i;
    char *args = "argc-test-helper these are some arguments that we want to pass in";
    if ((i = spawn(args)) < ERR_OK) {
        error(" argc-test: process exited with value %d", i);
    }

    pass("argc-test");

    exit(0);
    return 0;
}
