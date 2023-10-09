/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:30:42 by yena              #+#    #+#             */
/*   Updated: 2023/10/09 15:14:35 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
  t_data data;

  data.name = "yena";
  data.campus = "Seoul";
  data.coalition = "Gon";
  std::cout << "* Data: \n" << data << std::endl;
  uintptr_t raw = Serializer::serialize(&data);

  std::cout << "* After serialization: " << raw << std::endl;
  Data *data2 = Serializer::deserialize(raw);

  std::cout << "\n* After deserialization: \n" << *data2 << std::endl;
  return 0;
}
