/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:43:52 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 16:34:57 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

#include <iostream>
#include <string>

class Zombie {
 public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce(void) const;
    std::string getName() const;
    void setName(std::string name);

 private:
    std::string name_;
};

Zombie* zombieHorde(int N, std::string name);

#endif  // ZOMBIE_HPP_
