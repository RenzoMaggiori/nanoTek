/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** False
*/

#include "False.hpp"

nts::False::False() {
    OutputType* status = new OutputType(OutputType::FALSE);
    this->getPins()[1] = status;
}
nts::False::~False() {
    delete this->getPins()[1];
}

nts::pinType nts::False::getPinType(std::size_t pin) {
    if (pin != 1) throw Error("Invalid pin.");
    return pinType::OUTPUT;
}

void nts::False::updateOutputPin() {
    return;
}