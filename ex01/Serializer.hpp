/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:31:30 by yena              #+#    #+#             */
/*   Updated: 2023/10/11 15:09:08 by yena             ###   ########.fr       */
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

};

#endif //EX01__SERIALIZER_HPP_
