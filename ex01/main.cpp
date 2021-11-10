/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:13:12 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 16:26:46 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* zombies = zombieHorde(8, "test");

    for (int i = 0; i < 8; i++) {
        zombies[i].announce();
    }

    delete[] zombies;
    return 0;
}
