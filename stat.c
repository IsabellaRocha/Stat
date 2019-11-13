#include "stat.h"

int main() {
    struct stat n;
    stat("stat.h", &n);
    printf("Size of file: %d\n\n", n.st_size);
    printf("File Mode(Permissions): %d\n\n", n.st_mode);
    printf("Last time Accessed: %s\n\n", ctime(&n.st_atime));
    return 0;
}
