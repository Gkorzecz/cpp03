#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _Name("default"), _HitPoints(10), _EnergyPoint(10), _AttackDamage(0)
{
    std::cout << "Default ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(), _HitPoints(10), _EnergyPoint(10), _AttackDamage(0)
{
    std::cout << "Named ClapTrap constructor called." << std::endl;
    this->_Name = Name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_Name << " destructor called." << std::endl;;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    this->_Name = other._Name;
    this->_AttackDamage = other._AttackDamage;
    this->_EnergyPoint = other._EnergyPoint;
    this->_HitPoints = other._HitPoints;
    std::cout << "Copy ClapTrap constructor called for " << this->_Name << "." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->_Name = other._Name;
        this->_AttackDamage = other._AttackDamage;
        this->_EnergyPoint = other._EnergyPoint;
        this->_HitPoints = other._HitPoints;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void ClapTrap::setName(const std::string& Name)
{
    this->_Name = Name;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_EnergyPoint == 0)
    {
        std::cout << "ClapTrap " << this->_Name << " is out of Energy, can't attack." << std::endl;
        return;
    }
    else if (this->_HitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_Name << " is dead, can't do much... RIP." << std::endl;
        return;
    }
    else
    {
        this->_EnergyPoint -= 1;
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_HitPoints == 0)
    {
        std::cout << "STOP ! STooOOOpp ! " << this->_Name << " already dead !" << std::endl;
        return;
    }
    if (amount >= this->_HitPoints)
        this->_HitPoints = 0;
    else
        this->_HitPoints -= amount;
    std::cout << "ClapTrap " << this->_Name << " has taken " << amount << " damage(s) and have " << this->_HitPoints << " health left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_EnergyPoint == 0)
    {
        std::cout << "ClapTrap " << this->_Name << " is out of Energy, can't repair itself." << std::endl;
        return;
    }
    else if (this->_HitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_Name << " is dead, can't do much... RIP." << std::endl;
        return;
    }
    else if (this->_HitPoints + amount <= 10)
    {
        this->_EnergyPoint -= 1;
        this->_HitPoints += amount;
        std::cout << "ClapTrap " << this->_Name << " has repaired " << amount << " hit point(s) and has " << this->_HitPoints << " health left." << std::endl;
        return;
    }
    else
        std::cout << "Hit points can't be superior to 10, repairing impossible." << std::endl;
}
