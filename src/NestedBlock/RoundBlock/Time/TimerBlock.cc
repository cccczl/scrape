#include "NestedBlock/RoundBlock/Time/TimerBlock.h"
#include "GlobalTimer.h"

MultiType TimerBlock::getValue() const
{
    return std::to_string(globalTimer->timeElapsedInSeconds());
}

TimerBlock::TimerBlock(std::shared_ptr<GlobalTimer> gt) : globalTimer(gt) {}
