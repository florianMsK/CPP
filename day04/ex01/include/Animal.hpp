/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:51 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 10:45:32 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.hpp"


class Animal
{
public:
//Why no virtual constructor ? cf => https://www.jhadheeraj.com/post/virtual-destructor-and-costrouctor
//The compiler adds some extra code to 
//the class when you make any function virtual. It creates a vptr and points it 
//to Vtable. Once this is done, then only you can use any virtual function. 
//There is no vptr that exists before the constructor call, so it is impossible 
//to resolve the virtual constructor. 
    Animal();
    virtual ~Animal();
    Animal(Animal const & src); //Constructeur par copie
    Animal & operator=(Animal const & src); //Assignation 
    
    const std::string &getType(void) const;
    virtual void    makeSound(void) const;
    
protected:
    std::string _type;

};

#endif