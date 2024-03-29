#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void): _name("No name"), _materiaNb(0)
{
    this->init(this->_materiaBox);
    return ;
}

Character::Character(std::string name): _name(name), _materiaNb(0)
{
    this->init(this->_materiaBox);    
    return ;
}

Character::Character(Character const & src)
{
    *this = src;
    return ;
}

Character::~Character(void)
{
    return ;
}

Character &Character::operator=(Character const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_materiaNb = rhs.getMateriaNb();
        for (int i = 0; i < this->_materiaNb; i++)
            this->_materiaBox[i] = rhs.getMateriaBox(i);
        
    }
    return (*this);
}

void Character::init(AMateria **box)
{
    for (int i = 0; i < 4; i++)
        box[i] = 0;
}

int Character::getMateriaNb(void) const
{
    return (this->_materiaNb);
}

std::string const & Character::getName() const
{
    return (this->_name);
}

AMateria * Character::getMateriaBox(int i) const
{
    return (this->_materiaBox[i]);
}

void Character::equip(AMateria* m)
{
    if (m || this->_materiaNb < 4)
    {
        this->_materiaBox[this->_materiaNb] = m;
        this->_materiaNb++;
    }
    return ;
}

void Character::unequip(int idx)
{
    if (this->_materiaNb >= idx)
    {
        this->_materiaBox[idx] = 0;
        this->_materiaNb--;
    }
    return ;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx <= this->_materiaNb && this->_materiaBox[idx])
        this->_materiaBox[idx]->use(target);
    else
        std::cout << "No materia found at index " << idx << std::endl;
    return ;
}