/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 18:40:50 by kkido             #+#    #+#             */
/*   Updated: 2026/06/26 20:31:49 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include "iostream"

Brain::Brain() {
  std::cout << "Brain constructor called." << std::endl;
  for (int i = 0; i < 100; i++) {
    ideas[i] = "no idea";
  }
}

Brain::Brain(const Brain& src) {
  std::cout << "Brain copy constructor called." << std::endl;
  for (int i = 0; i < 100; i++) {
    this->ideas[i] = src.ideas[i];
  }
}

Brain& Brain::operator=(const Brain& src) {
  std::cout << "Brain copy assignment operator called." << std::endl;
  if (this != &src) {
    for (int i = 0; i < 100; i++) {
      this->ideas[i] = src.ideas[i];
    }
  }
  return *this;
}

Brain::~Brain() {
  std::cout << "Brain destructor called." << std::endl;
}

std::string Brain::get_ideas(int index) const {
  if (index < 0 || index >= 100) {
    std::cout << index << "is invalid index" << std::endl;
    return ("Error");
  }
  return (ideas[index]);
}

void Brain::set_ideas(int index, std::string idea) {
  if (index < 0 || index >= 100) {
    std::cout << index << "is invalid index" << std::endl;
    return;
  }
  ideas[index] = idea;
}