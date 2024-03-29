#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
  public:
    Fixed(void);
    Fixed(int const nb);
    Fixed(float const nb);
    Fixed(Fixed const &f);
    ~Fixed(void);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed &operator=( Fixed const & rhs);
    float toFloat( void ) const;
    int   toInt( void ) const;

  private:
    int _point_value;
    static int const _frac_bit;
};

std::ostream  &operator<<(std::ostream & o, Fixed const & rhs);

#endif
