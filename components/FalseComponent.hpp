/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** FalseComponent
*/

#ifndef FALSECOMPONENT_HPP_
#define FALSECOMPONENT_HPP_

#include "../AComponent.hpp"

namespace nts {
	class FalseComponent: public AComponent {
		public:
			FalseComponent();
			~FalseComponent() = default;
			Types getStatus() const;
		protected:
		private:
	};
}

#endif /* !FALSECOMPONENT_HPP_ */
