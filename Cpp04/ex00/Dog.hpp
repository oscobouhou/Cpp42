/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:20 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 23:33:36 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class	Dog : public Animal	{

public:
	Dog();
	Dog( const Dog& ref );
	Dog &	operator=( const Dog& rhs );
	~Dog();
	virtual void	makeSound() const ;

};

#endif