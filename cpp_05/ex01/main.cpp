/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:42:07 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/29 12:27:33 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"

int	main( void )
{
	try
	{
		Bureaucrat	dwight = Bureaucrat("Dwight Schrute", 3);
		Form	foo = Form("Area 51 Form", false, 3, 10);
		
		dwight.signForm(foo);
		foo.beSigned(dwight);
		std::cout << foo << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	// try
	// {
	// 	Bureaucrat jim = Bureaucrat("Jim Halpert", 2);
	// 	std::cout << jim << std::endl;
	// 	jim.incrementGrade();
	// 	std::cout << jim << std::endl;
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << std::endl;
	// try
	// {
	// 	Bureaucrat michael = Bureaucrat("Michael Scott", 1);
	// 	std::cout << michael << std::endl;
	// 	michael.incrementGrade();
	// 	std::cout << michael << std::endl;
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << RED << e.what() << RESET << std::endl;
	// }
	return (0);
}