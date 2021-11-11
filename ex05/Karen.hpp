/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:41:30 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/11 11:04:10 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef KAREN_HPP_
#define KAREN_HPP_

#include <iostream>
#include <string>

class Karen {
 public:
    Karen();
    ~Karen();

    void complain(std::string level);

 private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void unknown(void);
};
#endif  // KAREN_HPP_
