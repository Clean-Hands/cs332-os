#include <lib/usyscall.h>
#include <lib/stdio.h>
#include <lib/string.h>

int
main(int argc, char *argv[])
{
    if(argc > 1){
        mkdir(argv[1]);
        exit(0);
    }
    
    exit(-1);
}
