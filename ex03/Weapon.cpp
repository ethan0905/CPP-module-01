#include "Weapon.hpp"

Weapon::Weapon( void )
{
	std::cout << "Contructor called" << std::endl;
	return ;
}

Weapon::Weapon( std::string type )
{
	this->_type = type;
	std::cout << "Contructor called" << std::endl;
	return ;
}

Weapon::~Weapon( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

const std::string	&Weapon::getType( void )
{
	const std::string	&strRef = this->_type;

	return (strRef);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
	return ;
}
