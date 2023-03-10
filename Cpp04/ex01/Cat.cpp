/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:13 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 23:45:05 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) 	{

	this->_brain = new Brain();
	std::cout << this->_type << " default Constructor called" << std::endl;
}

Cat::Cat( const Cat& ref )	{

	this->_type = ref._type;
	this->_brain = new Brain( *ref._brain );
	std::cout << "Cat copy Constructor called" << std::endl;
}

std::string	Cat::haveIdea( int const & i ) const {
	return this->_brain->haveIdea( i );
}

void	Cat::setNewIdea( int const & i, std::string const & NewIdea )	{
	this->_brain->setNewIdea( i, NewIdea );
}

Cat &	Cat::operator=( const Cat& rhs )	{

	this->_type = rhs._type;
	delete this->_brain;
	this->_brain = new Brain( *rhs._brain );
	std::cout << "Cat assignement operator called" << std::endl;
	return *this ;
}

void	Cat::makeSound() const	{
	std::cout << "[ Miiiiaaaaaaouuuuwwwww ]" << std::endl;
}

Cat::~Cat( void )	{

	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;
}
