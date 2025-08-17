#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
    private:
        std::string _Name;
        unsigned int _HitPoints;
        unsigned int _EnergyPoint;
        unsigned int _AttackDamage;

    public:
        ClapTrap();
        explicit ClapTrap(std::string Name);
        ClapTrap(const ClapTrap& other);
        ClapTrap &operator=(const ClapTrap &other);
        ~ClapTrap();

        void setName(const std::string& Name);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif