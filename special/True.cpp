/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** True
*/

#include "True.hpp"

nts::True::True() {
    std::shared_ptr<nts::OutputType> status = std::make_shared<nts::OutputType>(OutputType::TRUE);
    this->getPins()[1] = status;
}

nts::pinType nts::True::getPinType(std::size_t pin) {
    if (pin != 1) throw Error("Invalid pin.");
    return pinType::OUTPUT;
}

void nts::True::updateOutputPin() {
    return;
}