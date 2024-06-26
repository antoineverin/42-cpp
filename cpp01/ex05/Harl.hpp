#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>
# include <map>

class Harl
{

private:
	struct {
		std::string name;
		void (Harl::*f)();
	} levels[4];

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	Harl();
	void complain(std::string level);

};

#endif
