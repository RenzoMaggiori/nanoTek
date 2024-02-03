/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** NotComponent
*/

#include "NotComponent.hpp"
#include "../Links.hpp"
#include <iostream>

nts::NotComponent::NotComponent()
{
	this->setPins(1, 1);
}
Types nts::NotComponent::getStatus() const
{
	return Types::UNDEFINED;
}

void nts::NotComponent::setLink(std::size_t pin, nts::IComponent &component, std::size_t componentPin) {
	if (pin > _pins.first + _pins.second) return; // implement error handling
	if (_links[pin])
		delete _links[pin];
	if (pin != 2) {
		_links[pin] = new Links(componentPin, &component, component._links[componentPin]->getStatus());
		if (!_links[2])
			_links[2] = new Links();
	}

	Types status1 = _links[1] ? _links[1]->getStatus() : Types::UNDEFINED;
	Types statusSet;

	if (status1 == Types::TRUE)
		statusSet = Types::FALSE;
	else if (status1 == Types::FALSE)
		statusSet = Types::TRUE;
	else
		statusSet = Types::UNDEFINED;
	if (pin == 2)
		_links[2] = new Links(componentPin, &component, statusSet);
	_links[2]->setStatus(statusSet);

	std::cout << "Pin: " << pin << " Status: " << component._links[3]->getStatus() << std::endl;
	setChildLink(&component, componentPin, pin);
}
 