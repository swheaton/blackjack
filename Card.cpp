#include "Card.h"

namespace blackjack
{

Card::Card():
    suit(SuitEnum::NONE),
    value(ValueEnum::NONE) {}

Card::Card(int cardNum)
{
    if (cardNum < 1 || cardNum > 52)
    {
        suit = SuitEnum::NONE;
        value = ValueEnum::NONE;
    }
    else
    {
        cardNum--;
        suit = static_cast<SuitEnum>(cardNum / static_cast<int>(ValueEnum::NUM_VALUES));
        value = static_cast<ValueEnum>(cardNum % static_cast<int>(ValueEnum::NUM_VALUES));
    }
}

bool Card::operator == (const Card& rhs)
{
    return suit == rhs.suit && value == rhs.value;
}

bool Card::operator != (const Card& rhs)
{
    return !(*this == rhs);
}

bool Card::operator < (const Card& rhs)
{
    return value < rhs.value;
}

bool Card::operator <=

(const Card& rhs)
{
    return value <= rhs.value;
}

bool Card::operator > (const Card& rhs)
{
    return value > rhs.value;
}

bool Card::operator >= (const Card& rhs)
{
    return value >= rhs.value;
}

SuitEnum Card::getSuit()
{
    return this->suit;
}

void Card::setSuit(SuitEnum suit)
{
    this->suit = suit;
}

ValueEnum Card::getValue()
{
    return this->value;
}

void Card::getValue(ValueEnum value)
{
    this->value = value;
}
} // namespace blackjack