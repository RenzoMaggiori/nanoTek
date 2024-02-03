/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** Links
*/

#ifndef LINKS_HPP_
#define LINKS_HPP_

#include "AComponent.hpp"
#include "IComponent.hpp"

class Links {
	private:
		std::size_t _pin;
		nts::IComponent *_component = nullptr;
		Types _status = Types::UNDEFINED;
	public:
		Links(std::size_t pin = 0, nts::IComponent *component = nullptr, Types status = UNDEFINED);
		~Links() = default;
		Types getStatus() const;
		void setStatus(Types status);
		void setComponent(nts::IComponent *component);
		void setPin(size_t pin);

	protected:
};

#endif /* !LINKS_HPP_ */
