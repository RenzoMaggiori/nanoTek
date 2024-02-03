/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** Links
*/

#ifndef LINKS_HPP_
#define LINKS_HPP_

#include "AComponent.hpp"

class Links {
	private:
		std::size_t _pin;
		nts::IComponent &_component;
		Types _status = Types::UNDEFINED;
	public:
		Links(std::size_t pin, nts::IComponent &component, Types status);
		~Links() = default;
		Types getStatus() const;

	protected:
};

#endif /* !LINKS_HPP_ */
