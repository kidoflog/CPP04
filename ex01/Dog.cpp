/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 13:29:58 by kkido             #+#    #+#             */
/*   Updated: 2026/06/26 15:03:48 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
  std::cout << "Dog constructor called." << std::endl;
  type = "Dog";
}

Dog::Dog(const Dog& src) : Animal(src) {
  std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& src) {
  std::cout << "Dog copy assignment operator called." << std::endl;

  if (this != &src) {
    Animal::operator=(src);
  }
  return *this;
}

Dog::~Dog() {
  std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const {
  std::cout << "Dog: Woof! Woof! Ruff!" << std::endl;
}
