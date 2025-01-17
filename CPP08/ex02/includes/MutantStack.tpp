/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:46:08 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/14 12:47:29 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

//======    Constructors / Destructors    ======

template <typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "Default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj)
{
	*this = obj;
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
	std::cout << "Destructor called" << std::endl;
}

//======	Overload Operator             ======

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &obj)
{
	if (this != &obj)
	{
		
	}
	return (*this);
}