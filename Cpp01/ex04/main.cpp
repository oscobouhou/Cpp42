/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:32:53 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 17:08:30 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Maestro.hpp"

int	main( int ac, char **av )	{

	if ( ac != 4 )
		return ( std::cout << INVALID_ARG << std::endl, EXIT_FAILURE );
	if ( !std::string(av[2]).size() )
		return ( std::cout << INVALID_REPLACER << std::endl, EXIT_FAILURE );
	Maestro			Center( av[1], std::string(av[2]), std::string(av[3]));
	return ( EXIT_SUCCESS );

}
