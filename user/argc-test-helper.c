#include <lib/test.h>

int main(int argc, char const *argv[])
{
    if (argc != 11) {
        error(" argc-test: incorrect argc, value was: %d", argc);
    }

    exit(0);
    return 0;
}
