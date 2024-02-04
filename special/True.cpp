/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** True
*/

#include "True.hpp"

nts::True::True() {
    OutputType* status = new OutputType(OutputType::TRUE);
    this->getPins()[1] = status;
}
nts::True::~True() {
    if (_pins[1]) {
        delete _pins[1];
        _pins[1] = nullptr;
    }
}

nts::pinType nts::True::getPinType(std::size_t pin) {
    if (pin != 1) throw Error("Invalid pin.");
    return pinType::OUTPUT;
}

void nts::True::updateOutputPin() {
    return;
}