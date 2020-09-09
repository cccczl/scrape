#include <string>
#include <memory>
#include <cmath>
#include "NestedBlock/RoundBlock/Operators/OperatorsRound.h"

MultiType OperatorsRound::getValue() const
{
    return std::to_string(round(num->getDouble()));
}

OperatorsRound::OperatorsRound(std::shared_ptr<NestedBlock> n) : num(n) {}
