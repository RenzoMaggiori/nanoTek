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
	};
}

#endif