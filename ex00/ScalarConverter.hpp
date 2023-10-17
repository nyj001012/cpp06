/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:29:50 by yena              #+#    #+#             */
/*   Updated: 2023/10/17 11:14:48 by yena             ###   ########.fr       */
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

#define FLOAT_MAX 3.4028235e+38
#define FLOAT_MIN -3.4028235e+38
#define DOUBLE_MAX 1.7976931348623158e+308
#define DOUBLE_MIN -1.7976931348623158e+308

class ScalarConverter {
 public:
  static std::string _str;

  static void convert(std::string str);
  static void strToSpecial();
  static void strToChar();
  static void strToNumeric();
  static void printChar();
  static void printInt();
  static void printFloat();
  static void printDouble();

 private:
  ScalarConverter();
  ScalarConverter(const ScalarConverter &other);
  ScalarConverter &operator=(const ScalarConverter &other);
  ~ScalarConverter();
};

#endif  // EX00__SCALARCONVERTER_HPP_
