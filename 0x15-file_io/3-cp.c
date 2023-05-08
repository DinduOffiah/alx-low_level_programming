#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 1024

int main(int argc, char *argv[]) {
    int fd_from, fd_to, nread;
    char buf[BUF_SIZE];

    // Check number of arguments
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    // Open the source file
    if ((fd_from = open(argv[1], O_RDONLY)) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    // Open the destination file
    if ((fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664)) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    // Copy the file contents
    while ((nread = read(fd_from, buf, BUF_SIZE)) > 0) {
        if (write(fd_to, buf, nread) != nread) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    // Check for read error
    if (nread == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    // Close the files
    if (close(fd_from) == -1 || close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
        exit(100);
    }

    return 0;
}
