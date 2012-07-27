#include <time.h>
#include <sys/time.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    time_t time = ::time(nullptr);

    timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);

    printf("Time: %ld Timespec t: %ld us: %ld", time, ts.tv_sec, ts.tv_nsec);

    return 0;
}
