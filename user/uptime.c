#include <kernel/types.h>
#include <user/user.h>

int main(int argc, char*argv[]) {
    int time = uptime();
    printf("Running time:%d(ticks)\n", time);
    exit(0);
}