/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:43:27 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 12:19:13 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie one = Zombie("Stack");
    one.announce();

    randomChump("Random");

    Zombie *two = newZombie("Heap");
    two->announce();
    delete two;

    return 0;
}
