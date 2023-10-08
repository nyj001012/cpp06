/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utills.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:22:13 by yena              #+#    #+#             */
/*   Updated: 2023/10/08 17:29:32 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/08.
//

#include "utils.hpp"

bool isSpecial(std::string str) {
  if (str == "nan" || str == "nanf"
	  || str == "+inf" || str == "+inff"
	  || str == "-inf" || str == "-inff"
	  || str == "inf" || str == "inff")
	return true;
  return false;
}

bool isChar(std::string str) {
  for (int i = 0; i < str.length(); i++) {
	if (std::isdigit(str[i]))
	  return false;
  }
  return true;
}

bool isInt(std::string str) {
  int i = 0;

  if (str[0] == '+' || str[0] == '-')
	i++;
  for (i; i < str.length(); i++) {
	if (!std::isdigit(str[i]))
	  return false;
  }
  return true;
}

bool isFloat(std::string str) {
  try {
	float num = std::stof(str);
  } catch (std::exception &e) {
	return false;
  }
  return true;
}

bool isDouble(std::string str) {
  try {
	double num = std::stod(str);
  } catch (std::exception &e) {
	return false;
  }
  return true;
}
