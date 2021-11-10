/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:48:59 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 16:23:33 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name_("") {}

Zombie::Zombie(std::string name) : name_(name) {}

Zombie::~Zombie() {
    std::cout << "Destroyed: ";
    std::cout << "<" << this->name_ << ">" << std::endl;
}

std::string Zombie::getName() const { return name_; }

void Zombie::setName(std::string name) { this->name_ = name; }

void Zombie::announce(void) const {
    std::cout << "<" << this->name_ << ">";
    std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}
