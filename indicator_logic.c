#include "indicator_logic.h"

typedef enum
{
    IDLE,
    LEFT_ACTIVE,
    RIGHT_ACTIVE,
    HAZARD_ACTIVE
}State;

State current_state = IDLE;

void Indicator_Task()
{
    // state machine logic
}
