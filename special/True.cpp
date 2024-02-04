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
    delete this->getPins()[1];
}

nts::pinType nts::True::getPinType(std::size_t pin) {
    if (pin != 1) throw Error("Invalid pin.");
    return pinType::OUTPUT;
}

void nts::True::updateOutputPin() {
    return;
}