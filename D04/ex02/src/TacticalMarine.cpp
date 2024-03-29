#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
    *this = src;
    return ;
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh ..." << std::endl;    
    return ;
}

ISpaceMarine* TacticalMarine::clone(void) const
{
    ISpaceMarine *clone = new TacticalMarine;
    return (clone);
}

void TacticalMarine::battleCry(void) const
{
    std::cout << "For the holy PLOT !" << std::endl;
    return ;
}

void TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with bolter *" << std::endl;
    return ;
}

void TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with chainsword *" << std::endl;
    return ;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const & rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (*this);
}
