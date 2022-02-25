/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:01:07 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/25 17:19:56 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure( void ) : AMateria("Cure")
{
  std::cout << "Default constructor of Cure" << std::endl;
}

Cure::~Cure()
{
  std::cout << "Destructor of Cure" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria("Cure")
{
  *this = src;
  std::cout << "Constructor by copy initialised" << std::endl;
}

Cure & Cure::operator=(Cure const & src)
{
  this->_item = src._item;
  std::cout << "Assignation operator for class Cure is called" << std::endl;
  return (*this);
}

/*Display function =>  Cure : "* shoots an Cure bolt at <name> *" */
void  Cure::use(ICharacter &target)
{
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
AMateria *Cure::clone(void) const
{
  return (new Cure(*this));
}