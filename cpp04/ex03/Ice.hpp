#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{

public:
	Ice();
	Ice(const Ice &other);
	~Ice();

	AMateria *clone() const;
	void use(ICharacter &target);

	Ice &operator=(const Ice &oher);

};

#endif
