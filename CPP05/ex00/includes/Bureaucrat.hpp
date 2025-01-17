/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:45 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/04 17:51:19 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

# define MAGENTA "\033[35m"

# define BLUE "\033[34m"
class Bureaucrat
{
	public	:

				//======    Constructors / Destructors    ======
				Bureaucrat(void);
				Bureaucrat(const Bureaucrat &other);
				Bureaucrat(std::string Name, int Grade);
				Bureaucrat &operator=(const Bureaucrat &other);
				~Bureaucrat(void);
				//======            Getters                ======
				std::string	GetName(void) const;
				int GetGrade(void) const;
				//======	            Exceptions         ======
				class GradeTooHighException : public std::exception
				{
					public : virtual const char* what() const throw();

				};
				class GradeTooLowException : public std::exception
				{
					public : virtual const char* what() const throw();
				};
				//======	           Methods             ======
				void IncreaseGrade(void);
				void DecreaseGrade(void);
	private : 
				std::string const	_Name;
				int					_Grade;

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Object);

#endif 