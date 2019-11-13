#include "stat.h"

int main() {
    struct stat n;
    char str[100];
    int error = stat("stat.h", &n);
    if (error == -1) {
        printf("Error: %s", strerror(errno));
        return 0;
    }
    printf("Size of stat.h: %lld\n\n", n.st_size);
    printf("File Mode (Permissions) of stat.h: %o\n\n", n.st_mode);
    printf("Last time stat.h was accessed: %s\n\n", ctime(&n.st_atime));
    return 0;
}
