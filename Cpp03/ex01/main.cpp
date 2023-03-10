/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:34:39 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/09 15:20:14 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )	{

	ScavTrap	jon("jon");
	ClapTrap	robert("robert");


	std::cout << jon.recupAttackDamage() << jon.recupEnergyPoints() << jon.recupHitPoints() << std::endl;

	jon.attack("marius");
	robert.attack("jon");
	jon.takeDamage(5);
	jon.guardGate();
	robert.attack("jon");
	jon.takeDamage(1);

	return ( EXIT_SUCCESS );

}