/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:24 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/08 17:42:30 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

//======    Parse input           ======

bool isValidInput(int ac, char **av)
{
	if (ac < 3)
	{
		std::cout << RED << "Error : number of arguments is too less, add at least 2 arguments." << RESET << std::endl;
		return (false);
	}  
	if (ac > 3001)
	{
		std::cout << RED << "Error : number of arguments too high, put at up 3000 arguments." << RESET << std::endl;
		return (false);
	}
	for (int i = 1; i < ac; i++)
	{
		if (!checkEachArg(av[i]))
			return (false);
	}  
	return (true);
}

bool checkEachArg(const char *input)
{
	long nb = strtol(input, NULL, 10);
	if (nb < INT_MIN || nb > INT_MAX)
	{
		std::cout << RED << "Error : number : " << input << " overflow." << RESET << std::endl;
		return (false);
	}
	else if (nb < 0)
	{
		std::cout << RED << "Error : number : " << input << " is negative." << RESET << std::endl;
		return (false);
	}
	for (int i = 0; i < input[i]; i++)
	{
		if (!isdigit(input[i]))
		{
			std::cout << RED << "Error : " << input << " isn't only numeric argument." << RESET << std::endl;	
			return (false);
		}
	}
	return (true);
}


int calculatePowerOfTwo(int n) 
{
    return (static_cast<int>(std::pow(2, n + 1)));
}

int generateSequenceTerm(int n, int prev)  
{
	int nb = 0;
	int power = calculatePowerOfTwo(n);
	if (n == 0) 
		return (2);
	nb = power - prev;
	return (nb);
}