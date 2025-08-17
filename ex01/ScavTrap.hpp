#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap: public ClapTrap
{
    private:

    public:
        ScavTrap();
        explicit ScavTrap(std::string Name);
        ScavTrap(const ScavTrap& other);
        ScavTrap &operator=(const ScavTrap &other);
        ~ScavTrap();
        
        void    attack(const std::string& target);
        void    guardGate(void);
};

#endif