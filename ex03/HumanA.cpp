/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:40:23 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 17:51:37 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
    : weapon_(weapon), name_(name) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
    std::cout << this->name_ << " attacks with his ";
    std::cout << this->weapon_.getType() << std::endl;
}
