/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:51 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/01 11:48:57 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat	test1 = Bureaucrat("test1", 42);
	Form		Test2 = Form("Test2", 42, 42);

	std::cout << Test2 << std::endl;
	test1.signForm(Test2);
	test1.signForm(Test2);
	try
	{
		Form	invalidForm("InvalidForm", 0, 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form	invalidForm("InvalidForm", 1000, 160);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat	lea = Bureaucrat("Lea", 43);
	Form		identityForm = Form("ID", 10, 11);
	lea.signForm(identityForm);
	return (0);

}
