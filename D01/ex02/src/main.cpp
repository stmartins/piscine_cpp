#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
  ZombieEvent zombieevent;
  Zombie *zombie;

  zombieevent.setZombieType("cowboy");
  zombie = zombieevent.newZombie("Billy");
  zombie->announce();

  zombieevent.randomChump();
  return (0);
}
