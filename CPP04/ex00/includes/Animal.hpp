/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:45:26 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 10:01:36 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

# define MAGENTA "\033[35m"

class Animal
{
	public	:
				Animal(void);
				Animal(std::string Type);
				Animal(const Animal &other);
				Animal &operator=(const Animal &other);
				virtual ~Animal(void);
				std::string	getType(void) const;
				void SetType(const std::string & );
				virtual void makeSound(void) const;
	protected : 
				std::string _Type;

	
};

#endif 