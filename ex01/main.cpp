#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\033[1mCONSTRUCTION :\033[0m" << std::endl;
    ClapTrap Bot1;
    Bot1.setName("Wall-E");
    ClapTrap Bot2("R.O.B.");
    ClapTrap Bot3(Bot1);
    Bot3.setName("R2D2");
    std::cout << "\n";

    std::cout << "\033[1mTESTING :\033[0m" << std::endl;
    Bot2.attack("Clampin");
    Bot2.takeDamage(10);
    Bot2.takeDamage(10);
    Bot1.takeDamage(5);
    Bot1.beRepaired(5);
    Bot3.takeDamage(9);
    for (int i = 0; i < 5; i++)
        Bot3.beRepaired(2);
    std::cout << "\n";

    std::cout << "\033[1mDESTRUCTION :\033[0m" << std::endl;
    return (0);
}