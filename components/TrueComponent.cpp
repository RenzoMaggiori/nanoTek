/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** TrueComponent
*/

#include "TrueComponent.hpp"

nts::TrueComponent::TrueComponent()
{
	this->setPins(0, 1);
}

Types nts::TrueComponent::getStatus() const {
	return Types::TRUE;
}