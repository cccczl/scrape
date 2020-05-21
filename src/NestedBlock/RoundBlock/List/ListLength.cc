#include "NestedBlock/RoundBlock/List/ListLength.h"
#include <string>

ListLength::ListLength(const List& l)
    : list(l) {}

std::string ListLength::getValue() const
{
    return std::to_string(list.length());
}
