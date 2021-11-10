/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:52:47 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 20:42:31 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include <iostream>

#include "Weapon.hpp"

class HumanB {
 public:
    HumanB(std::string name);
    ~HumanB();

    void attack() const;
    void setWeapon(Weapon& weapon);

 private:
    HumanB();
    Weapon* weapon_;
    std::string name_;
};

#endif  // HUMANB_HPP_
