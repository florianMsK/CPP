/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:46:34 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/28 09:59:28 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"


class Character : public ICharacter
{
public:
    Character(const std::string &name);
    ~Character();
    Character(const Character &src); //Constructeur par copie
    Character &operator=(Character const &src); //Assignation 
    
   // virtual ~ICharacter() {}
    virtual std::string const   &getName() const;
    virtual void                equip(AMateria* m);
    virtual void                unequip(int idx);
    virtual void                use(int idx, ICharacter &target);
    virtual void                display_inventory() const;

private:
    Character();
    std::string     _name;
    unsigned int _nbItem;
    AMateria        *_itemsTab[4];
   // int             _nb;

};

#endif