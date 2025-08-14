#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
    private:
        std::string _Name;
        int _HitPoints;
        int _EnergyPoint;
        int _AttackDamage;

    public:
        ClapTrap();
        explicit ClapTrap(std::string Name);
        ClapTrap(const ClapTrap& other);
        ClapTrap &operator=(const ClapTrap &other);
        ~ClapTrap();
};

#endif