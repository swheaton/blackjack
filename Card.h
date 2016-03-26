#include <cstdint>

#ifndef __CARD_H__
#define __CARD_H__

namespace blackjack
{

enum class SuitEnum : std::uint8_t
{
    SPADES,
    HEARTS,
    DIAMONDS,
    CLUBS,
    NUM_SUITS,
    NONE
};

enum class ValueEnum : std::uint8_t
{
    ACE,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    NUM_VALUES,
    NONE
};

class Card
{
public:
    // Blank card
    Card();
    
    // Copy constructor - not specified so we use default
    
    // Constructs based on a card number-
    //  That is, card 1 is Ace of Spades, 2 is two of Spades,
    //  14 is Ace of Hearts, etc.
    Card(int cardNum);
    
    // Assignment operator : default
    
    // Equality is based on suit and value, so probably not much help
    //  in practice
    bool operator == (const Card& rhs);
    bool operator != (const Card& rhs);
    bool operator < (const Card& rhs);
    bool operator <= (const Card& rhs);
    bool operator > (const Card& rhs);
    bool operator >= (const Card& rhs);

    SuitEnum getSuit();
    void setSuit(SuitEnum suit);
    
    ValueEnum getValue();
    void getValue(ValueEnum value);
    
private:
    // Contains suit information for this card
    SuitEnum suit;
    
    // Value of this card (Ace through King)
    ValueEnum value;
};
}; // namespace blackjack
#endif