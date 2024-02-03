/*
** EPITECH PROJECT, 2023
** nanoTek
** File description:
** AComponent.cpp
*/

#include "AComponent.hpp"
#include "Links.hpp"
#include <iostream>

void AComponent::setLink(std::size_t pin, nts::IComponent &component, std::size_t componentPin) {
	if (pin > _pins.first + _pins.second) return; // implement error handling
	// std::cout << "Pin: " << pin << " Status: " << component.getStatus() << std::endl;
	if (_links[pin])
		delete _links[pin];
	_links[pin] = new Links(componentPin, &component, component.getStatus());
}

std::size_t AComponent::compute(std::size_t pin) {
	if (_links.size() < pin)
		return Types::UNDEFINED;
	// std::cout << "PIN compute: " << pin << std::endl;
	// std::cout << "map size: " << _links.size() << std::endl;
	// for (auto &kv: _links) {
	// 	std::cout << kv.first << "status: " << kv.second->getStatus() << std::endl;
	// }
	return _links[pin]->getStatus();
}

void AComponent::setPins(std::size_t input, std::size_t output) {
	this->_pins.first = input;
	this->_pins.second = output;
}

void AComponent::setChildLink(IComponent *component, std::size_t pin, std::size_t parentPin) {
	component->_links[pin] = new Links(parentPin, this);
}