/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** Link
*/

#include "Link.hpp"

nts::Link::Link(IComponent &inputComponent, IComponent &outputComponent, std::size_t outputPin, std::size_t inputPin) 
: _outputComponent(outputComponent), _inputComponent(inputComponent)
{
    inputComponent.getPins()[inputPin] = outputComponent.getPins()[outputPin];
}

nts::Link::~Link() {
    // Release memory for _status in the destructor
    delete _status;
}