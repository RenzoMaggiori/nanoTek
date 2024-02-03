#ifndef AComponent_HPP
#define AComponent_HPP


#include "IComponent.hpp"

class AComponent: public nts::IComponent
{
	private:
	public:
		AComponent() = default;
		virtual ~AComponent() = default;
		virtual Types getStatus() const = 0;
		virtual void setLink(std::size_t pin, nts::IComponent &component, std::size_t componentPin);

		std::size_t compute(std::size_t pin);
		void setPins(std::size_t input, std::size_t output);
		void setChildLink(IComponent *component, size_t pin, std::size_t parentPin);
		// First pair correspond to input pins and second one corresponds output pins
		
	protected:

};

#endif