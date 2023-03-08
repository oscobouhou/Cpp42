/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:34:39 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 05:29:25 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )	{

	ClapTrap	jon("jon");
	ClapTrap	robert("robert");
	ClapTrap	marius("marius");

	jon.attack("marius");
	marius.takeDamage(5);
	robert.attack("jon");
	jon.takeDamage(5);
	marius.attack("jon");
	jon.takeDamage(1);

	return ( EXIT_SUCCESS );

}