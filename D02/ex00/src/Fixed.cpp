#include "Fixed.hpp"
#include <iostream>

int const Fixed::_frac_bit = 8;

Fixed::Fixed(void)
{
  std::cout << "Default constructor called" << std::endl;
  this->setRawBits(0);
  return ;
}

Fixed::Fixed(Fixed &org)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = org;
  return ;
}

Fixed::~Fixed(void)
{
  std::cout << "Destructor called" << std::endl;
  return ;
}

int Fixed::getRawBits( void ) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (this->_point_value);
}

Fixed   &Fixed::operator=( Fixed const & rhs)
{
  std::cout << "Assignation operator called" << std::endl;
  this->_point_value = rhs.getRawBits();
  return (*this);
}

void  Fixed::setRawBits( int const raw )
{
  this->_point_value = raw;
}
