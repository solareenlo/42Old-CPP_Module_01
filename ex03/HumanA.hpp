/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:22:55 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 20:42:18 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef HUMANA_HPP_
#define HUMANA_HPP_

#include <iostream>

#include "Weapon.hpp"

class HumanA {
 public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();

    void attack() const;

 private:
    HumanA();
    Weapon& weapon_;
    std::string name_;
};

#endif  // HUMANA_HPP_
