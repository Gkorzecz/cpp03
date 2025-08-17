#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap Default Constructor called." << std::endl;
	setAttackDamage(20);
	setEnergyPoints(50);
	setHitPoints(100);
}

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
	std::cout << "ScavTrap Named Constructor called." << std::endl;
	setAttackDamage(20);
	setEnergyPoints(50);
	setHitPoints(100);
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	std::cout << "Copy ScavTrap constructor called for " << this->getName() << "." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap copy assignment operator called.\n";
    return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " destructor called." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->getEnergyPoints() == 0)
    {
        std::cout << "ScavTrap " << this->getName() << " is out of Energy, can't attack." << std::endl;
        return;
    }
    else if (this->getHitPoints() == 0)
    {
        std::cout << "ScavTrap " << this->getName() << " is dead, can't do much... RIP." << std::endl;
        return;
    }
    else
    {
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
    }
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap named " << this->getName() << " is now in Gate Keeper mode." << std::endl;
}



