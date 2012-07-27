#include <time.h>
#include <sys/time.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    time_t time = ::time(nullptr);

    timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);

    printf("Time22: %ld Timespec t: %ld us: %ld", time, ts.tv_sec, ts.tv_nsec);

    return 0;
}
