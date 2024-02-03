/*
** EPITECH PROJECT, 2023
** nanoTek
** File description:
** AComponent.cpp
*/

#include "AComponent.hpp"

void setLink(std::size_t pin, AComponent &component, std::size_t componentPin) {

}

void setPins(std::size_t input, std::size_t output) {
	this->_pins.first = input;
	this->_pins.second = output;
}