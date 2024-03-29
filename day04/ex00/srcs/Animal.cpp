/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:35 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 09:49:44 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
  std::cout << "Default constructor Animal called" << std::endl;
  return;
}

Animal::~Animal()
{
    std::cout << "Default destructor Animal called" << std::endl;
    return ;
}

const std::string &Animal::getType(void) const
{
  return (this->_type);
}

Animal::Animal(Animal const & src)
{
  *this = src;
}

Animal & Animal::operator=(Animal const & src)
{
  if (this == &src)
      return (*this);
  this->_type = src._type;
  return (*this);
}

void    Animal::makeSound(void) const
{
  std::cout << "Unknown sounds from an unknown animal" << std::endl;
}

//Animal::Animal(std::string name) : _type(name)
//{
  //_type = name;
//  std::cout << "Constructor called for Dog and type " << name << std::endl;
//}
