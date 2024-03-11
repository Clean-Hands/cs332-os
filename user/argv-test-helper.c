#include <lib/test.h>
#include <lib/string.h>

int main(int argc, char const *argv[])
{
    if (argc != 11) {
        error(" argv-test: incorrect argc, value was: %d", argc);
    }

    char *correct_argv[] = {"argv-test-helper", "these", "are", "some", "arguments", "that", "we", "want", "to", "pass", "in"};
    for (int i = 0; i < 11; i++) {
        if (strcmp(argv[i], correct_argv[i]) != 0) {
            error(" argv-test: incorrect value in argv[%d] = \"%s\", value was: %s", i, correct_argv[i], argv[i]);
        }
    }

    exit(0);
    return 0;
}
