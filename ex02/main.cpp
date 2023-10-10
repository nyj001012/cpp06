/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:24:25 by yena              #+#    #+#             */
/*   Updated: 2023/10/10 15:15:50 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate() {
  std::srand(time(NULL));
  int random = std::rand() % 3;
  if (random == 0)
	  return new A();
  else if (random == 1)
	  return new B();
  else
	  return new C();
}

void identify(Base *p) {
  std::cout << "------------------- IDENTIFY *p -------------------" << std::endl;
  if (dynamic_cast<A*>(p))
	std::cout << "type: A" << std::endl;
  if (dynamic_cast<B*>(p))
	std::cout << "type: B" << std::endl;
  if (dynamic_cast<C*>(p))
	std::cout << "type: C" << std::endl;
}

void identify(Base &p) {
  std::cout << "------------------- IDENTIFY &p -------------------" << std::endl;
  try {
    (void)dynamic_cast<A&>(p);
    std::cout << "type: A" << std::endl;
  } catch (std::exception &e) {
    try {
      dynamic_cast<B&>(p);
      std::cout << "type: B" << std::endl;
    } catch (std::exception &e) {
      try {
        dynamic_cast<C&>(p);
        std::cout << "type: C" << std::endl;
      } catch (std::exception &e) {
        std::cout << "Error: unknown type" << std::endl;
      }
    }
  }
}

int main() {
  Base *base = generate();
  Base &baseRef = *base;

  identify(base);
  identify(baseRef);
  delete base;

  return 0;
}
