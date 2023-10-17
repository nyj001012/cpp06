/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:30:07 by yena              #+#    #+#             */
/*   Updated: 2023/10/17 13:40:02 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/09.
//

#include "Base.hpp"

Base::Base() { std::srand(time(NULL)); }

Base::Base(const Base &other) {}

Base &Base::operator=(const Base &other) {
  if (this != &other) *this = other;
  return (*this);
}

Base::~Base() {}
