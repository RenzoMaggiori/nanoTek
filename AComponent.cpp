/*
** EPITECH PROJECT, 2023
** nanoTek
** File description:
** AComponent.cpp
*/

#include "AComponent.hpp"
#include "Links.hpp"

void AComponent::setLink(std::size_t pin, nts::IComponent &component, std::size_t componentPin) {
	if (pin > _pins.first + _pins.second) return; // implement error handling

	// Implement get pins for components
	if (_links[pin])
		delete _links[pin];
	_links[pin] = new Links(componentPin, component, component.getStatus());

}

std::size_t AComponent::compute(std::size_t pin) {
	if (_links.size() < pin)
		return Types::UNDEFINED;
	return _links[pin]->getStatus();
}

void AComponent::setPins(std::size_t input, std::size_t output) {
	this->_pins.first = input;
	this->_pins.second = output;
}