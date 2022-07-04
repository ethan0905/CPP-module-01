#ifndef WEAPON_HPP
# define WEAPON_HPP

class	Weapon {

	public:
		Weapon( void );
		~Weapon( void );

		const std::string	&getType( void );
		void	setType( std::string type );

	private:
		std::string type;
}

#endif
