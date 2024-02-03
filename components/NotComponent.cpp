/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** NotComponent
*/

#include "NotComponent.hpp"

nts::NotComponent::NotComponent()
{
	this->setPins(1, 1);
}
Types nts::NotComponent::getStatus() const
{
	return Types::UNDEFINED;
}