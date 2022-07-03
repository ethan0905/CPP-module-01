#include "Zombie.hpp"

Zombie::Zombie ( std::string name ) : _name(name) {

	std::cout << "Zombie : " << _name << " has been created !" << std::endl;
	return ;
}

Zombie::~Zombie ( void ) {

	std::cout << "Destructor has been called" << std::endl;
	return ;
}

void	Zombie::announce ( void ) {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
