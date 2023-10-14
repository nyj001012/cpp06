/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:30:07 by yena              #+#    #+#             */
/*   Updated: 2023/10/14 14:53:22 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/09.
//

#include "Base.hpp"

Base::Base() {}

Base::Base(const Base &other) {
  if (this != &other)
    *this = other;
}

Base &Base::operator=(const Base &other) {
  if (this != &other)
    *this = other;
  return (*this);
}

Base::~Base() {}
