/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:30:07 by yena              #+#    #+#             */
/*   Updated: 2023/10/14 14:53:29 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/09.
//

#ifndef EX02__BASE_HPP_
#define EX02__BASE_HPP_

class Base {
 public:
  Base();
  Base(const Base &other);
  Base &operator=(const Base &base);
  virtual ~Base() {};
};

#endif //EX02__BASE_HPP_
