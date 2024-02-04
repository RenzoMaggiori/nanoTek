/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** AComponent
*/

#include "AComponent.hpp"

std::map<std::size_t, nts::OutputType *> &nts::AComponent::getPins() {
    return _pins;
}

std::map<std::size_t, nts::Link *> &nts::AComponent::getLinks() {
    return _links;
}


void nts::AComponent::setLink(std::size_t pin, IComponent &component, std::size_t componentPin) {
    if (pin > _pins.size()) throw Error("Pin outside of bounds.");
    if (componentPin > component.getPins().size()) throw Error("Component pin outside of bounds.");

    std::map<std::size_t, nts::Link *> componentLinks = component.getLinks();
    Link *newLink = new Link(*this, component, componentPin, pin);

    if (_links[pin])
        delete _links[pin];
    if (componentLinks[componentPin])
        delete  componentLinks[componentPin];
    _links[pin] = newLink;
    componentLinks[componentPin] = newLink;

    this->updateOutputPin();
}

nts::OutputType nts::AComponent::compute(std::size_t pin) {
    if (pin > _pins.size()) Error("Invalid pin.");
    return *(_pins[pin]);
}

