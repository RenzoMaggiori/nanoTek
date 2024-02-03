/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** OrComponent
*/

#include "OrComponent.hpp"

OrComponent::OrComponent()
{
	this->setPins(2, 1);
}

Types OrComponent::getStatus() const
{
	return Types::UNDEFINED;
}