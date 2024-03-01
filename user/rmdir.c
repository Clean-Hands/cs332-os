#include <lib/usyscall.h>
#include <lib/stdio.h>
#include <lib/string.h>

// char buf[512];
// void
// mkdir(int fd)
// {
//     int n;

//    while((n = read(fd, buf, sizeof(buf))) > 0) {
//         if (write(1, buf, n) != n) {
//             printf("cat: write error\n");
//             exit(-1);
//         }
//     }
//     if(n < 0){
//         printf("cat: read error\n");
//         exit(-1);
//     }
// }

int
main(int argc, char *argv[])
{
    // int fd, i;

    // if(argc <= 1){
    //     cat(0);
    //     exit(0);
    // }

    // for(i = 1; i < argc; i++){
    //     if((fd = open(argv[i], FS_RDONLY, 0)) < 0){
    //         printf("cat: cannot open file %s\n", argv[i]);
    //         exit(-1);
    //     }
    //     cat(fd);
    //     close(fd);
    // }
    int retval = rmdir("test");
    if (retval != ERR_OK) {
        printf("error: %d", retval);
        exit(retval);
    }
    

    exit(0);
}
