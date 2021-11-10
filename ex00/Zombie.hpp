/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:43:52 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 12:20:20 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

#include <iostream>
#include <string>

class Zombie {
 public:
    Zombie(std::string name);
    ~Zombie();

    void announce(void) const;

 private:
    std::string name_;
    Zombie();
};

Zombie* newZombie(std::string name);

void randomChump(std::string name);

#endif  // ZOMBIE_HPP_
