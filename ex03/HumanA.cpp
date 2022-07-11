#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {

	std::cout << "HumanA : Constructor " << name << " called." << std::endl;
	return ;
}

HumanA::~HumanA( void ) {

	std::cout << "HumanA : Destructor " << this->_name << " called." << std::endl;
	return ;
}

void	HumanA::attack( void ) {

	std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
	return ;
}
