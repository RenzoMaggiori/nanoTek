#ifndef ICOMPONENT_HPP
#define ICOMPONENT_HPP

#include <string>

class Links;

enum Types {
    FALSE,
    TRUE,
    UNDEFINED,
};
namespace nts {
	class IComponent
	{
		private:
		public:
			virtual ~IComponent() = default;
			virtual std::size_t compute(std::size_t pin) = 0;
			//virtual void simulate() = 0;
			//virtual Links getLink(std::size_t pin) const = 0;
			virtual Types getStatus() const = 0;
			virtual void setLink(std::size_t pin, nts::IComponent &component, std::size_t componentPin) = 0;

	};
}


#endif