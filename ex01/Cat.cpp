/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 13:29:53 by kkido             #+#    #+#             */
/*   Updated: 2026/06/26 14:55:45 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
  std::cout << "Cat constructor called." << std::endl;
  type = "Cat";
}

Cat::Cat(const Cat& src) : Animal(src) {
  std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
  std::cout << "Cat copy assignment operator called." << std::endl;
  if (this != &src) {
    Animal::operator=(src);
  }
  return *this;
}

Cat::~Cat() {
  std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const {
  std::cout << "Cat: Meow~ Purr..." << std::endl;
}
