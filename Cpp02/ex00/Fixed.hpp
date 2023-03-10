/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:25:39 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/07 15:16:34 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1
# define SUCCESS 1
# define FAIL 0

class	Fixed	{

public:
	Fixed();
	Fixed( const Fixed &origin );
	~Fixed();
	Fixed&	operator=( const Fixed& src );

	int					getRawBits( void ) const;
	void				setRawBits( int const raw );

private:
	int					_n;
	static const int	_nRest = 8;

};
