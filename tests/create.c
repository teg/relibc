#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int fd = creat("create.out", 0755);
    if (fd >= 0) {
        write(fd, "Hello World!\n", 14);
        close(fd);
        return 0;
    } else {
        write(2, "creat failed\n", 14);
        return 1;
    }
}
