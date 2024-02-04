/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** False
*/

#include "False.hpp"

nts::False::False() {
    std::shared_ptr<nts::OutputType> status = std::make_shared<nts::OutputType>(OutputType::FALSE);
    this->getPins()[1] = status;
}

nts::pinType nts::False::getPinType(std::size_t pin) {
    if (pin != 1) throw Error("Invalid pin.");
    return pinType::OUTPUT;
}

void nts::False::updateOutputPin() {
    return;
}