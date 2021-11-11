/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:16:45 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/11 12:18:51 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}
Karen::~Karen() {}

void Karen::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my "
                 "7XL-double-cheese-triple-pickle-special-ketchup burger. I "
                 "just love it!"
              << std::endl;
    std::cout << std::endl;
}

void Karen::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You "
                 "don’t put enough! If you did I would not have to ask for it!"
              << std::endl;
    std::cout << std::endl;
}

void Karen::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout
        << "I think I deserve to have some extra bacon for free. I’ve been "
           "coming here for years and you just started working here last month."
        << std::endl;
    std::cout << std::endl;
}

void Karen::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now."
              << std::endl;
    std::cout << std::endl;
}

void Karen::unknown(void) {
    std::cout << "[ UNKNOWN ]" << std::endl;
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
    std::cout << std::endl;
}

void Karen::complain(std::string level) {
    void (Karen::*funcptr[5])(void) = {
        &Karen::debug, &Karen::info,    &Karen::warning,
        &Karen::error, &Karen::unknown,
    };

    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    for (; i < 4 && str[i] != level;) {
        i++;
    }

    (this->*funcptr[i])();
}
