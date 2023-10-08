/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:29:50 by yena              #+#    #+#             */
/*   Updated: 2023/10/08 16:48:26 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/08.
//

#ifndef EX00__SCALARCONVERTER_HPP_
#define EX00__SCALARCONVERTER_HPP_

#include <iostream>
#include <sstream>
#include "utils.hpp"

class ScalarConverter {
 private:

 public:
  static std::string _str;
  static char _char;
  static int _int;
  static float _float;
  static double _double;

  static void convert(std::string str);
  static void strToSpecial();
  static void strToInt();
  static void strToFloat();
  static void strToDouble();
  static void strToChar();
};

#endif //EX00__SCALARCONVERTER_HPP_
