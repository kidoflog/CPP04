/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 13:29:58 by kkido             #+#    #+#             */
/*   Updated: 2026/06/26 13:46:58 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
  type = "Dog";
}

Dog::Dog(const Dog& src) : Animal(src) {
}

Dog& Dog::operator=(const Dog& src) {
  if (this != &src) {
    Animal::operator=(src);
  }
  return *this;
}

Dog::~Dog() {
}

void Dog::makeSound() const {
  std::cout << "Dog: Woof! Woof! Ruff!" << std::endl;
}
