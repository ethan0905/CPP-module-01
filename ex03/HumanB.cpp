#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL) {

	std::cout << "HumanB : Constructor " << name << " called." << std::endl;
	return ;
}

HumanB::~HumanB( void ) {

	std::cout << "HumanB : Destructor " << this->_name << " called." << std::endl;
	return ;
}

void	HumanB::attack( void ) {

	std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon( Weapon &weapon ) {

	this->_weapon = &weapon;
	return ;
}
