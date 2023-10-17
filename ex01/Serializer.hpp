/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:31:30 by yena              #+#    #+#             */
/*   Updated: 2023/10/17 11:14:58 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/09.
//

#ifndef EX01__SERIALIZER_HPP_
#define EX01__SERIALIZER_HPP_

#include <stdint.h>

#include "Data.h"

class Serializer {
 public:
  static uintptr_t serialize(Data *ptr);
  static Data *deserialize(uintptr_t raw);

 private:
  Serializer();
  Serializer(const Serializer &other);
  Serializer &operator=(const Serializer &other);
  ~Serializer();
};

#endif  // EX01__SERIALIZER_HPP_
