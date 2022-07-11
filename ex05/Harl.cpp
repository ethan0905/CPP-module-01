#include "Harl.hpp"

Harl::Harl( void ) {

	return ;
}

Harl::~Harl( void ) {

	return ;
}

void	Harl::complain( std::string level ) {
	
	const	char * const lookUpTable[5] = {
		debug();
		info();
		warning();
		error();
	};

	return ;
}

void	Harl::debug( void ) {

	std::cout << "Debug" << std::endl;
	return ;
}

void	Harl::info( void ) {

	std::cout << "Info" << std::endl;
	return ;
}

void	Harl::warning( void ) {

	std::cout << "Warning" << std::endl;
	return ;
}

void	Harl::error( void ) {

	std::cout << "Error" << std::endl;
	return ;
}
