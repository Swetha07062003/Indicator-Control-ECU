#include <stdio.h>
#include "scheduler.h"
#include "indicator_logic.h"

int main()
{
    System_Init();

    while(1)
    {
        Scheduler_Run();
    }

    return 0;
}
