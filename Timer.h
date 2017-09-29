#ifndef TIMER_H_INCLUDED
#define TIMER_H_INCLUDED
#include <time.h>

class Timer
{
    private:
        time_t t1;
        time_t t2;

    public:
        Timer()
        {
            t1 = time(NULL);
            t2 = time(NULL);
        }

        void start()
        {
            t1 = time(NULL);
        }
        void stop()
        {
            t2 = time(NULL);
        }
        time_t total()
        {
            return t2 - t1;
        }
};

#endif // TIMER_H_INCLUDED
