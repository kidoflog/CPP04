/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 14:36:01 by kkido             #+#    #+#             */
/*   Updated: 2026/06/26 14:55:26 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnonymouse") {
  std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
  std::cout << "WrongAnimal copy constructor called." << std::endl;

  this->type = src.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
  std::cout << "WrongAnimal copy assignment operator called." << std::endl;
  if (this != &src) {
    this->type = src.type;
  }
  return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called." << std::endl;
}

void WrongAnimal::makeSound() const {
  std::cout << "there are no Wrong animals..." << std::endl;
}

std::string WrongAnimal::getType() const {
  return type;
}
