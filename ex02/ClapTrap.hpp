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

        void            setName(const std::string& Name);
        void            setHitPoints(unsigned int HitPoints);
        void            setEnergyPoints(unsigned int EnergyPoint);
        void            setAttackDamage(unsigned int AttackDamage);
        std::string     getName(void);
        unsigned int    getHitPoints(void);
        unsigned int    getEnergyPoints(void);
        unsigned int    getAttackDamage(void);

        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
};

#endif