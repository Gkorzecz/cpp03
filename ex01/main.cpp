#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "______________________________________\n";
    std::cout << "\033[1mCONSTRUCTION :\033[0m" << std::endl;
    ScavTrap Bot1;
    Bot1.setName("Bender");
    ScavTrap Bot2(Bot1);
    Bot2.setName("Roberto");
    ScavTrap Bot3;
    Bot3 = Bot1;
    Bot3.setName("Calculon");
    ScavTrap Bot4("Crushinator");
    std::cout << "\n";

    std::cout << "______________________________________\n";
    std::cout << "\033[1mTESTING :\033[0m" << std::endl;
    Bot1.attack(Bot2.getName());
    Bot3.takeDamage(100);
    Bot3.takeDamage(1);
    Bot3.beRepaired(1);
    Bot3.attack(Bot4.getName());
    Bot2.takeDamage(1);
    Bot2.beRepaired(1);
    Bot2.beRepaired(1);
    std::cout << "\n";

    std::cout << "______________________________________\n";
    std::cout << "\033[1mDESTRUCTION :\033[0m" << std::endl;
    return (0);
}