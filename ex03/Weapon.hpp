/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:10:06 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 17:38:43 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <string>

class Weapon {
 public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();

    std::string const& getType() const;
    void setType(std::string type);

 private:
    std::string type_;
};

#endif  // WEAPON_HPP_
