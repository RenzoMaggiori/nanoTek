#ifndef AComponent_HPP
#define AComponent_HPP

#include <string>
#include <map>
#include "IComponent.hpp"

class AComponent: public nts::IComponent
{
	private:
		std::map<std::size_t, Links *> _links;
		// First pair correspond to input pins and second one corresponds output pins
		std::pair<std::size_t, std::size_t> _pins;
	public:
		AComponent() = default;
		virtual ~AComponent() = default;
		virtual Types getStatus() const = 0;

		std::size_t compute(std::size_t pin);
		void setPins(std::size_t input, std::size_t output);
		void setLink(std::size_t pin, nts::IComponent &component, std::size_t componentPin);
};

#endif