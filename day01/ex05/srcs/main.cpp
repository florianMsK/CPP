/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:32:22 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/16 12:40:55 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Karen.hpp"

int main(int ac, char **av)
{
    std::string entry;
    Karen karen;
    if (ac == 1)
    {
        std::cout << "Hello, ";
        while (1)
        {
            std::cout << "please write down a complain for Karen: -DEBUG -INFO -WARNING -ERROR -CTRL + c" << std::endl;
            std::cout << "=>";
            std::cin >> entry ;
            std::cout << std::endl;
            karen.complain(entry);
            std::cout << std::endl;
        }
    }
    std::cout << "Thanks for Karen" << std::endl;
    return (0);    
}