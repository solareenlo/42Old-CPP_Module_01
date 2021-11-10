/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:48:59 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 12:20:33 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name_(name) {}

Zombie::~Zombie() { std::cout << "Destroyed: " << name_ << std::endl; }

void Zombie::announce(void) const {
    std::cout << this->name_ << " BraiiiiiiinnnzzzZ..." << std::endl;
}
