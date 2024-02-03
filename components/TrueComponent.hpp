/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** TrueComponent
*/

#ifndef TRUECOMPONENT_HPP_
#define TRUECOMPONENT_HPP_

#include "../AComponent.hpp"

namespace nts {
	class TrueComponent: public AComponent {
		private:
		public:
			TrueComponent();
			~TrueComponent() = default;
			Types getStatus() const override;
	};
}

#endif /* !TRUECOMPONENT_HPP_ */
