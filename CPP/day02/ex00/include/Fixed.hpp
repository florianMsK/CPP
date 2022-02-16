/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:42:09 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/16 20:07:59 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>


class Fixed{
public:
    Fixed( void );
    ~Fixed( void );
    Fixed(Fixed const & src );              
    Fixed & operator=( Fixed const &src );     //Surchage d'operateur d'affectation    
    int     getRawBits( void ) const;       //getteur
    void    setRawBits(int const raw);      //setteur
    
private: 
    static const int _integer_coma = 8;
    int              _integer_fixed;
};

std::ostream &  operator<<( std::ostream & o, Fixed const & i);

#endif