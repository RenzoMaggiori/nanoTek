/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** FalseComponent
*/

#include "FalseComponent.hpp"

nts::FalseComponent::FalseComponent() {
	this->setPins(0, 1);
}

Types nts::FalseComponent::getStatus() const
{
	return Types::UNDEFINED;
}