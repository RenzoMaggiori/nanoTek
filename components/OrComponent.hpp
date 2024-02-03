/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** OrComponent
*/

#ifndef ORCOMPONENT_HPP_
#define ORCOMPONENT_HPP_

#include "../AComponent.hpp"

class OrComponent : public AComponent {
	public:
		OrComponent();
		~OrComponent() = default;
		Types getStatus() const;
	protected:
	private:
};

#endif /* !ORCOMPONENT_HPP_ */
