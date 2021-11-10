/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:43:27 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 16:33:41 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie stack = Zombie("Stack");
    stack.announce();

    randomChump("Random");

    Zombie *heap = newZombie("Heap");
    heap->announce();
    delete heap;

    return 0;
}
