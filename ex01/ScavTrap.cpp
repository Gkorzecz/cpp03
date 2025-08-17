ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap Default Constructor called" << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_dmg = 20;
	this->_guarding_gate = false;
}

ScavTrap::ScavTrap(): ClapTrap()

