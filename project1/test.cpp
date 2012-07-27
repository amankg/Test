#include <time.h>
#include <sys/time.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    time_t time = ::time(nullptr);

    timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);

<<<<<<< HEAD
    printf("TimeQ: %ld Timespec t: %ld us: %ld", time, ts.tv_sec, ts.tv_nsec);
=======
    printf("TimeR: %ld Timespec t: %ld us: %ld", time, ts.tv_sec, ts.tv_nsec);
>>>>>>> 1b760e201b861695587834dcb8151c798d8c8f75

    return 0;
}
