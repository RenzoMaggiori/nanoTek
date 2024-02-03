/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** XorComponent
*/

#ifndef XORCOMPONENT_HPP_
#define XORCOMPONENT_HPP_

#include "../AComponent.hpp"

class XorComponent : public AComponent{
	public:
		XorComponent();
		~XorComponent() = default;
		Types getStatus() const;
	protected:
	private:
};

#endif /* !XORCOMPONENT_HPP_ */
