/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** XorComponent
*/

#include "XorComponent.hpp"

XorComponent::XorComponent()
{
	this->setPins(2, 1);
}

Types XorComponent::getStatus() const {
	return Types::UNDEFINED;
}