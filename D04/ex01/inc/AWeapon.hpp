#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
  public:
    AWeapon(void);
    AWeapon(AWeapon const & src);
    AWeapon(std::string const & name, int apcost, int damage);
    virtual ~AWeapon(void);
    std::string const getname() const;
    int getAPcost() const;
    int getDamage() const;
    virtual void attack() const = 0;
    void setname(std::string name);
    void setAPcost(int APcost);
    void setDamage(int damage);
    AWeapon &operator=(AWeapon const &rhs);

  private:
    std::string _name;
    int _apcost;
    int _damage;
};

#endif
