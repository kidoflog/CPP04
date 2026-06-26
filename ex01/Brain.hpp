/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 18:40:47 by kkido             #+#    #+#             */
/*   Updated: 2026/06/26 20:04:33 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
 public:
  Brain();
  Brain(const Brain& src);
  Brain& operator=(const Brain& src);
  ~Brain();
  std::string get_ideas(int index) const;
  void set_ideas(int index, std::string idea);

 private:
  std::string ideas[100];
};

#endif