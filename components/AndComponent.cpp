/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** AndComponent
*/

#include "AndComponent.hpp"

nts::AndComponent::AndComponent()
{
	this->setPins(2, 1);
}

Types nts::AndComponent::getStatus() const
{
	return Types::UNDEFINED;
}