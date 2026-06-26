/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 13:07:17 by kkido             #+#    #+#             */
/*   Updated: 2026/06/26 14:55:50 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Anonymouse") {
  std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal& src) {
  std::cout << "Animal copy constructor called." << std::endl;
  this->type = src.type;
}

Animal& Animal::operator=(const Animal& src) {
  std::cout << "Animal copy assignment operator called." << std::endl;
  if (this != &src) {
    this->type = src.type;
  }
  return *this;
}

Animal::~Animal() {
  std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound() const {
  std::cout << "there are no animals..." << std::endl;
}

std::string Animal::getType() const {
  return type;
}
