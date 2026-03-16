#include "scheduler.h"
#include "indicator_logic.h"

void Scheduler_Run()
{
    Button_Task();
    Indicator_Task();
}
