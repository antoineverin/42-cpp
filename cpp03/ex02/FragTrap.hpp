#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
	
public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &other);
	~FragTrap();

	void highFiveGuys(void);

	FragTrap &operator=(const FragTrap &other);

};

#endif
