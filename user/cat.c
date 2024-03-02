#include <lib/usyscall.h>
#include <lib/stdio.h>
#include <lib/string.h>

char buf[512];
void
cat(int fd)
{
    int n;

   while((n = read(fd, buf, sizeof(buf))) > 0) {
        printf("read %d\n", fd);
        if (write(1, buf, n) != n) {
            printf("cat: write error\n");
            exit(-1);
        }
    }
    if(n < 0){
        printf("cat: read error\n");
        exit(-1);
    }
}

int
main(int argc, char *argv[])
{
    // int fd, i;

    printf("argc: %d\nargv: %s\nargv p: %p\n", argc, argv[0], argv);

    // char *argv_0 = (char *)0xFFFFFF7FFFFFDFC8;
    // char *argv_1 = (char *)0xFFFFFF7FFFFFDFE0;

    // // hard code dereference args
    // for (char *addr = (char *)0xffffff7fffffd000; addr <= (char *)0xffffff7fffffdfe0; addr++) {
    //     // if (*(char *)addr != 0) {
    //         printf("prev args %p: %x\n", addr, *addr);
    //     // }
    // }
    
    // for (char *addr = (char *)0xffffff7fffffdfe0 + 1; addr < (char *)0xffffff7ffffff000; addr++) {
    //     // printf("post args: %s\n", (char *)addr);
    //     // if (*(char *)addr != 0) {
    //         printf("post args %p: %x\n", addr, (*addr & 0xFF));
    //     // }
    // }
    // printf("cat argv[0]: %s\n", argv[]);
    // printf("cat argv[0]: %s\n", (char *)0xffffff7fffffdfe0);
    // printf("cat argv[0]: %s\n", (char *)0xffffff7fffffdfe0);
    // printf("cat argv[0]: %s\n", (char *)0xffffff7fffffdfe0);
    // printf("cat argv[0]: %s\n", (char *)0xffffff7fffffdfe0);
    // printf("argv[1]: %s\n", argv_1);

    // if(argc <= 1){
        // cat(0);
        exit(0);
    // }

    // for(i = 1; i < argc; i++){
    //     if((fd = open(argv[i], FS_RDONLY, 0)) < 0){
    //         printf("cat: cannot open file %s\n", argv[i]);
    //         exit(-1);
    //     }
    //     cat(fd);
    //     close(fd);
    // }
    exit(0);
}
