/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:13:29 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 17:39:02 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type_("") {}
Weapon::Weapon(std::string type) : type_(type) {}
Weapon::~Weapon() {}

std::string const& Weapon::getType() const { return type_; }

void Weapon::setType(std::string type) { type_ = type; }
