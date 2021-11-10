/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:54:23 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 18:26:13 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon_(NULL), name_(name) {}
HumanB::~HumanB() {}

void HumanB::attack() const {
    if (this->weapon_ == NULL) {
        std::cout << this->name_ << " is not equipped with a weapon."
                  << std::endl;
    } else {
        std::cout << this->name_ << " attacks with his ";
        std::cout << this->weapon_->getType() << std::endl;
    }
}

void HumanB::setWeapon(Weapon& weapon) { this->weapon_ = &weapon; }
