#include "Links.hpp"

Links::Links(std::size_t pin, nts::IComponent *component, Types status):
_pin(pin), _component(component), _status(status) {}

Types Links::getStatus() const {
	return _status;
}

void Links::setStatus(Types status)
{
	this->_status = status;
}

void Links::setComponent(nts::IComponent* component)
{
	this->_component = component;
}

void Links::setPin(std::size_t pin)
{
	this->_pin = pin;
}