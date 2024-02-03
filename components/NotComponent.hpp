/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** NotComponent
*/

#ifndef NOTCOMPONENT_HPP_
#define NOTCOMPONENT_HPP_

#include "../AComponent.hpp"

namespace  nts {
	class NotComponent : public AComponent{
		public:
			NotComponent();
			~NotComponent() = default;
			Types getStatus() const;
		protected:
		private:
	};
}

#endif /* !NOTCOMPONENT_HPP_ */
