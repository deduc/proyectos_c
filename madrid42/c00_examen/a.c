#include <unistd.h>

int main() {
    char a = 'a';
    write(1, &a, 1);
    write(1, "\n", 1);
    return 0;
}