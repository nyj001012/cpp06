/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:28:20 by yena              #+#    #+#             */
/*   Updated: 2023/10/11 15:12:59 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScalarConverter.hpp"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Error: Wrong number of arguments" << std::endl;
  } else {
    std::string str = (std::string) argv[1];
    ScalarConverter::convert(str);
  }
  return 0;
}
