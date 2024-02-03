#include "Links.hpp"

Links::Links(std::size_t pin, nts::IComponent &component, Types status):
_pin(pin), _component(component), _status(status) {}

Types Links::getStatus() const {
	return _status;
}