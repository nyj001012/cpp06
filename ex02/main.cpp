/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:24:25 by yena              #+#    #+#             */
/*   Updated: 2023/10/17 13:41:54 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

Base *generate() {
  int random = std::rand() % 3;
  if (random == 0)
    return new A();
  else if (random == 1)
    return new B();
  else
    return new C();
}

void identify(Base *p) {
  std::cout << "------------------- IDENTIFY *p -------------------"
            << std::endl;
  if (dynamic_cast<A *>(p)) std::cout << "type: A" << std::endl;
  if (dynamic_cast<B *>(p)) std::cout << "type: B" << std::endl;
  if (dynamic_cast<C *>(p)) std::cout << "type: C" << std::endl;
}

void identify(Base &p) {
  std::cout << "------------------- IDENTIFY &p -------------------"
            << std::endl;
  try {
    (void)dynamic_cast<A &>(p);
    std::cout << "type: A" << std::endl;
  } catch (std::exception &e) {
    try {
      (void)dynamic_cast<B &>(p);
      std::cout << "type: B" << std::endl;
    } catch (std::exception &e) {
      try {
        (void)dynamic_cast<C &>(p);
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
  std::cout << std::endl;
  identify(baseRef);
  delete base;

  return 0;
}
