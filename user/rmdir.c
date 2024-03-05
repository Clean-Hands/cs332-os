#include <lib/usyscall.h>
#include <lib/stdio.h>
#include <lib/string.h>

int
main(int argc, char *argv[])
{
    int retval = rmdir(argv[1]);
    if (retval != ERR_OK) {
        printf("error: %d", retval);
        exit(retval);
    }
    
    exit(0);
}
