/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:37:02 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 19:58:05 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    protected:
        const std::string   _name;
        bool                _signed;
        const int           _rankToSign;
        const int           _rankToExec;
        std::string   _target;
        
    public:
        Form();
        Form(std::string name ,int rankToSign, int rankToExec, std::string target);
        virtual ~Form();
        Form(Form const &src);
        Form &operator=(const Form &src);
    
        std::string getName(void) const;
        std::string	getTarget(void) const;
        void        setTarget(std::string target);
        bool        getIfSigned(void)const;
        int         getIfRankToSigned(void) const;
        int         getIfRankToExec(void) const;
        
        void        beSigned(Bureaucrat const &person);
        virtual void	execute(Bureaucrat const &executor) const = 0;
        
        void	openable(std::ofstream  &end_fd);
     //   virtual void	ft_do() const = 0;

        
    struct GradeTooHighException: public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("His grade is too high for this form");
        }
    };
    
    struct GradeTooLowException: public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("His grade is too Low for this form");
        }
    };
    
    struct FormIsSigned: public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("this form is signed");
        }
    };
    
    struct FormIsNotSigned: public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("This form is not signed");
        }
    };
};

std::ostream &operator<<(std::ostream &o, Form const &src);


#endif