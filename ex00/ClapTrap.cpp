#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("default"), _HitPoints(10), _EnergyPoint(10), _AttackDamage(0)
{}

ClapTrap::ClapTrap(std::string Name) : _Name(), _HitPoints(10), _EnergyPoint(10), _AttackDamage(0)
{
    this->_Name = Name;
}

ClapTrap::~ClapTrap()
{}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    this->_Name = other._Name;
    this->_AttackDamage = other._AttackDamage;
    this->_EnergyPoint = other._EnergyPoint;
    this->_HitPoints = other._HitPoints;
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
    return (*this);
}