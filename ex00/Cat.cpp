/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 13:29:53 by kkido             #+#    #+#             */
/*   Updated: 2026/06/26 13:46:46 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
  type = "Cat";
}

Cat::Cat(const Cat& src) : Animal(src) {
}

Cat& Cat::operator=(const Cat& src) {
  if (this != &src) {
    Animal::operator=(src);
  }
  return *this;
}

Cat::~Cat() {
}

void Cat::makeSound() const {
  std::cout << "Cat: Meow~ Purr..." << std::endl;
}
