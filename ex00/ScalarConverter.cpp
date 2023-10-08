/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:29:50 by yena              #+#    #+#             */
/*   Updated: 2023/10/08 17:21:16 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/08.
//

#include "ScalarConverter.hpp"

int ScalarConverter::_int = 0;
std::string ScalarConverter::_str = "";
char ScalarConverter::_char = 0;
float ScalarConverter::_float = 0.0f;
double ScalarConverter::_double = 0.0;

void ScalarConverter::convert(std::string str) {
  _str = str;
  if (isSpecial(_str))
	strToSpecial();
  else if (isChar(_str))
	strToChar();
  else if (isInt(_str))
	strToInt();
  else if (isFloat(_str))
	strToFloat();
  else if (isDouble(_str))
	strToDouble();
  else
	std::cout << "Error: Wrong argument" << std::endl;
}

void ScalarConverter::strToSpecial() {
  std::cout << "char: impossible" << std::endl;
  std::cout << "int: impossible" << std::endl;
  std::cout << "float: "  << _str;
  if (_str == "nan"
	  || _str == "inf" || _str == "-inf" || _str == "+inf")
	std::cout << "f";
  std::cout << std::endl;
  if (_str == "nanf"
	  || _str == "inff" || _str == "-inff" || _str == "+inff")
  std::cout << "double: " << _str.substr(0, _str.length() - 1) << std::endl;
}

void ScalarConverter::strToChar() {
  std::cout << "char: " << _str[0] << std::endl;
  std::cout << "int: " << static_cast<int>(_str[0]) << std::endl;
  std::cout << "float: " << static_cast<float>(_str[0]) << std::endl;
  std::cout << "double: " << static_cast<double>(_str[0]) << std::endl;
}

void ScalarConverter::strToInt() {
  std::cout << "char: " << static_cast<char>(std::stoi(_str)) << std::endl;
  std::cout << "int: " << std::stoi(_str) << std::endl;
  std::cout << "float: " << static_cast<float>(std::stoi(_str)) << std::endl;
  std::cout << "double: " << static_cast<double>(std::stoi(_str)) << std::endl;
}

void ScalarConverter::strToFloat() {
  std::cout << "char: " << static_cast<char>(std::stof(_str)) << std::endl;
  std::cout << "int: " << static_cast<int>(std::stof(_str)) << std::endl;
  std::cout << "float: " << std::stof(_str) << std::endl;
  std::cout << "double: " << static_cast<double>(std::stof(_str)) << std::endl;
}

void ScalarConverter::strToDouble() {
  std::cout << "char: " << static_cast<char>(std::stod(_str)) << std::endl;
  std::cout << "int: " << static_cast<int>(std::stod(_str)) << std::endl;
  std::cout << "float: " << static_cast<float>(std::stod(_str)) << std::endl;
  std::cout << "double: " << std::stod(_str) << std::endl;
}
