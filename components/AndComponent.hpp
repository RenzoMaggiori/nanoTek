#ifndef ANDCOMPONENT_HPP
#define ANDCOMPONENT_HPP

#include "../AComponent.hpp"

namespace nts {
	class AndComponent: public AComponent
	{
		private:
		public:
			AndComponent();
			~AndComponent() = default;
			Types getStatus() const;
			void setLink(std::size_t pin, nts::IComponent &component, std::size_t componentPin);
	};
}

#endif