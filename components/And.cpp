/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** And
*/

#include "And.hpp"

nts::And::And() {
    for (size_t i = 1; i < 4; i++) {
        std::shared_ptr<nts::OutputType> status = std::make_shared<nts::OutputType>(OutputType::UNDEFINED);
        _pins[i] = status;
    }
}

nts::pinType nts::And::getPinType(std::size_t pin) {
    if (pin > 3 || pin < 1) throw Error("Invalid pin.");
    if (pin < 3)
        return pinType::INPUT;
    if (pin == 3)
        return pinType::OUTPUT;
    return pinType::NONE;
}

void nts::And::updateOutputPin() {
    std::shared_ptr<nts::OutputType> status;

    if (*(_pins[1]) == OutputType::TRUE && *(_pins[2]) == OutputType::TRUE) {
        status = std::make_shared<nts::OutputType>(OutputType::TRUE);
        _pins[3] = status;
        return;
    }
    if (*(_pins[1]) == OutputType::FALSE || *(_pins[2]) == OutputType::FALSE) {
        status = std::make_shared<nts::OutputType>(OutputType::FALSE);
        _pins[3] = status;
        return;
    }
    status = std::make_shared<nts::OutputType>(OutputType::UNDEFINED);
    _pins[3] = status;
}