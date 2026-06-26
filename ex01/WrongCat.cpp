/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 14:39:55 by kkido             #+#    #+#             */
/*   Updated: 2026/06/26 15:05:35 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
  std::cout << "WrongCat constructor called." << std::endl;
  type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) {
  std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
  std::cout << "WrongCat copy assignment operator called." << std::endl;

  if (this != &src) {
    WrongAnimal::operator=(src);
  }
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const {
  std::cout << "WrongCat: Meow~ Purr..." << std::endl;
}
