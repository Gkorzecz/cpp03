#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap Default Constructor called." << std::endl;
	setAttackDamage(30);
	setEnergyPoints(100);
	setHitPoints(100);
}

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
	std::cout << "FragTrap Named Constructor called." << std::endl;
	setAttackDamage(30);
	setEnergyPoints(100);
	setHitPoints(100);
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << "Copy FragTrap constructor called for " << this->getName() << "." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "FragTrap copy assignment operator called.\n";
    return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " has succesfully High-Fived you, what a threat !" << std::endl;
}