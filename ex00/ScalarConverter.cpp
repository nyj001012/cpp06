/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:29:50 by yena              #+#    #+#             */
/*   Updated: 2023/10/11 15:06:04 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/08.
//

#include "ScalarConverter.hpp"

std::string ScalarConverter::_str = "";

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
  if (_str == "nan"
      || _str == "inf" || _str == "-inf" || _str == "+inf")
    std::cout << "f";
  std::cout << std::endl;
  if (_str == "nanf"
      || _str == "inff" || _str == "-inff" || _str == "+inff")
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
  std::cout << "char: ";
  if (std::stod(_str) < 32 || std::stod(_str) > 126)
    std::cout << "Non displayable" << std::endl;
  else
    std::cout << static_cast<char>(std::stod(_str)) << std::endl;
}

void ScalarConverter::printInt() {
  std::cout << "int: ";
  if (std::stod(_str) > INT_MAX || std::stod(_str) < INT_MIN)
    std::cout << "impossible" << std::endl;
  else
    std::cout << std::stoi(_str) << std::endl;
}

void ScalarConverter::printFloat() {
  std::cout << "float: ";
  if (std::stof(_str) > FLOAT_MAX || std::stof(_str) < FLOAT_MIN)
    std::cout << "impossible" << std::endl;
  else {
    std::cout << std::stof(_str);
    if (std::stof(_str) == std::stoi(_str))
      std::cout << ".0";
    std::cout << "f" << std::endl;
  }
}

void ScalarConverter::printDouble() {
  std::cout << "double: ";
  if (std::stod(_str) > DOUBLE_MAX || std::stod(_str) < DOUBLE_MIN)
    std::cout << "impossible" << std::endl;
  else {
    std::cout << std::stod(_str);
    if (std::stod(_str) == std::stoi(_str))
      std::cout << ".0";
    std::cout << std::endl;
  }
}

