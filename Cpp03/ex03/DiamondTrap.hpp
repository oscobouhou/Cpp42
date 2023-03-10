/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 07:58:39 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 23:08:50 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap	{

public:
	DiamondTrap();
	DiamondTrap( std::string name );
	DiamondTrap( const DiamondTrap& ref );
	DiamondTrap&	operator=( const DiamondTrap& rhs );
	~DiamondTrap();

	std::string		DiamondName() const ;
	void 			attack( std::string name );

	void			whoAmI();

private:
	std::string	_name;
	

};

#endif

	// using FragTrap::recupHitPoints;
	// using ScavTrap::recupEnergyPoints;
	// using FragTrap::recupAttackDamage;