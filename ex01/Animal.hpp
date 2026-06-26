/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 12:51:30 by kkido             #+#    #+#             */
/*   Updated: 2026/06/26 13:47:59 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
 public:
  Animal();
  Animal(const Animal& src);
  Animal& operator=(const Animal& src);
  virtual ~Animal();
  virtual void makeSound() const;
  std::string getType() const;

 protected:
  std::string type;
};

#endif
