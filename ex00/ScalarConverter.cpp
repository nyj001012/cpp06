/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:29:50 by yena              #+#    #+#             */
/*   Updated: 2023/10/17 18:24:48 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/08.
//

#include "ScalarConverter.hpp"

std::string ScalarConverter::_str = "";

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
  if (this != &other) _str = other._str;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
  if (this != &other) _str = other._str;
  return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string str) {
  _str = str;
  if (isSpecial(_str))
    strToSpecial();
  else if (isChar(_str))
    strToChar();
  else if (isInt(_str) || isFloat(_str) || isDouble(_str))
    strToNumeric();
  else
    std::cout << "Error: Wrong argument" << std::endl;
}

void ScalarConverter::strToSpecial() {
  std::cout << "char: impossible" << std::endl;
  std::cout << "int: impossible" << std::endl;
  std::cout << "float: " << _str;
  if (_str == "nan" || _str == "inf" || _str == "-inf" || _str == "+inf")
    std::cout << "f";
  std::cout << std::endl;
  if (_str == "nanf" || _str == "inff" || _str == "-inff" || _str == "+inff")
    std::cout << "double: " << _str.substr(0, _str.length() - 1) << std::endl;
  else
    std::cout << "double: " << _str << std::endl;
}

void ScalarConverter::strToChar() {
  std::cout << "char: " << _str[0] << std::endl;
  std::cout << "int: " << static_cast<int>(_str[0]) << std::endl;
  std::cout << "float: " << static_cast<float>(_str[0]) << std::endl;
  std::cout << "double: " << static_cast<double>(_str[0]) << std::endl;
}

void ScalarConverter::strToNumeric() {
  printChar();
  printInt();
  printFloat();
  printDouble();
}

void ScalarConverter::printChar() {
  std::stringstream ss(_str);
  int i;

  ss >> i;
  std::cout << "char: ";
  if (i < 32 || i > 126)
    std::cout << "Non displayable" << std::endl;
  else
    std::cout << static_cast<char>(i) << std::endl;
}

void ScalarConverter::printInt() {
  std::stringstream ss(_str);
  double d = std::strtod(_str.c_str(), nullptr);
  int i;

  ss >> i;
  std::cout << "int: ";
  if (d > INT_MAX || d < INT_MIN)
    std::cout << "impossible" << std::endl;
  else
    std::cout << i << std::endl;
}

void ScalarConverter::printFloat() {
  std::stringstream ss(_str);
  float f = static_cast<float>(std::strtod(_str.c_str(), nullptr));
  int i;

  ss >> i;
  std::cout << "float: ";
  if (f > FLOAT_MAX || f < FLOAT_MIN)
    std::cout << "impossible" << std::endl;
  else {
    std::cout << f;
    if (f == i && f < 1000000) std::cout << ".0";
    std::cout << "f" << std::endl;
  }
}

void ScalarConverter::printDouble() {
  std::stringstream ss(_str);
  double d = (std::strtod(_str.c_str(), nullptr));
  int i;

  ss >> i;
  std::cout << "double: ";
  if (d > DOUBLE_MAX || d < DOUBLE_MIN)
    std::cout << "impossible" << std::endl;
  else {
    std::cout << d;
    if (d == i && d < 1000000) std::cout << ".0";
    std::cout << std::endl;
  }
}
