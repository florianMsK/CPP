/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:49:55 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/28 15:02:41 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
  int i = 0;
    
  this->_learned = 0;
  while (i < 4)
  {
    this->_materia[i] = NULL;
    i++;
  }
   std::cout << "Default Constructor of MateriaSource called" << std::endl;
}

MateriaSource::~MateriaSource()
{
  int i = 0;

  while ( i < 4)
  {
    if (this->_materia[i])
      delete this->_materia[i];
    i++;
  }
  std::cout << "Destructor of MateriaSource called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &src)
{
  *this = src;
std::cout << "Copy construction of MateriaSource called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
  int i = 0;
  while (i < 4)
  {
    if (this->_materia[i])
      delete _materia[i];
    if (src._materia[i])
      this->_materia[i] = src._materia[i]->clone();
    else
      this->_materia[i] = NULL;
    i++;
  }
  std::cout << "Assignation constructor of operator called" << std::endl;
  return (*this);
  
}

void MateriaSource::learnMateria(AMateria* materiaToLearn)
{
  int i = 0;
  if (this->_learned >= 4)
		std::cout << "Can't learn any more materias" << std::endl;
	else
	{
    while (i < 4)
    {
      if (this->_materia[i] == NULL)
      {
        this->_materia[i] = materiaToLearn->clone();
        std::cout << "Learned " << materiaToLearn->getType() << " Materia" << std::endl;
        break ;
      }
      this->_learned++;
      i++;
    }
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
  int i = 0;
  while (i < 4)
  {
    if (type == this->_materia[i]->getType())
      return this->_materia[i]->clone();
    i++;
  }
  return (NULL);
}