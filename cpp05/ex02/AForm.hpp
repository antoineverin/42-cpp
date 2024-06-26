#ifndef AFROM_HPP
# define AFROM_HPP

# include <string>
# include <ostream>

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

private:
	const std::string name;
	bool signd;
	const int signGrade;
	const int execGrade;

protected:
	virtual void do_execute(const Bureaucrat &bureaucrat) const = 0;

public:
	AForm(const std::string &name, int signGrade, int execGrade);
	AForm(const AForm &other);
	virtual ~AForm();

	const std::string &getName() const;
	bool isSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;

	void beSigned(const Bureaucrat &bureaucrat);
	void execute(const Bureaucrat &bureaucrat) const;

	AForm &operator=(const AForm &other);

	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

};

std::ostream &operator<<(std::ostream &os, const AForm &obj);

#endif
