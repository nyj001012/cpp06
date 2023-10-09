/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:48:36 by yena              #+#    #+#             */
/*   Updated: 2023/10/09 15:19:29 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/09.
//

#ifndef EX01__DATA_H_
#define EX01__DATA_H_

#include <iostream>

typedef struct Data {
  std::string name;
  std::string campus;
  std::string coalition;
} t_data;

inline std::ostream &operator<<(std::ostream &os, const t_data &data) {
  os << "name: " << data.name << std::endl;
  os << "campus: " << data.campus << std::endl;
  os << "coalition: " << data.coalition << std::endl;
  return os;
}

#endif //EX01__DATA_H_
