/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 13:07:17 by kkido             #+#    #+#             */
/*   Updated: 2026/06/26 13:48:30 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Anonymouse") {
}

Animal::Animal(const Animal& src) {
  this->type = src.type;
}

Animal& Animal::operator=(const Animal& src) {
  if (this != &src) {
    this->type = src.type;
  }
  return *this;
}

Animal::~Animal() {
}

void Animal::makeSound() const {
  std::cout << "there are no animals..." << std::endl;
}

std::string Animal::getType() const {
  return type;
}
