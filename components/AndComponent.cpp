/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** AndComponent
*/

#include "AndComponent.hpp"
#include "../Links.hpp"
#include "iostream"
nts::AndComponent::AndComponent()
{
	this->setPins(2, 1);
}

Types nts::AndComponent::getStatus() const
{
	return Types::UNDEFINED;
}

void nts::AndComponent::setLink(std::size_t pin, nts::IComponent &component, std::size_t componentPin) {
	if (pin > _pins.first + _pins.second) return; // implement error handling
	//std::cout << "Pin: " << pin << " Status: " << component.getStatus() << std::endl;
	if (_links[pin])
		delete _links[pin];
	Types status1 = _links[1] ? _links[1]->getStatus() : Types::UNDEFINED;
	Types status2 = _links[2] ? _links[2]->getStatus() : Types::UNDEFINED;
	Types statusSet;

	if (status1 == Types::TRUE && status2 == Types::TRUE)
		statusSet = Types::TRUE;
	else if (status1 == Types::FALSE || status2 == Types::FALSE)
		statusSet = Types::FALSE;
	else
		statusSet = Types::UNDEFINED;
	if (pin == 3)
		_links[3] = new Links(componentPin, &component, statusSet);
	else {
		_links[pin] = new Links(componentPin, &component, component.getStatus());
		if (!_links[3])
			_links[3] = new Links();
		_links[3]->setStatus(statusSet);
	}
	setChildLink(&component, componentPin, pin);
}
