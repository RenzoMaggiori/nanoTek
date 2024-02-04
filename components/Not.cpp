/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** Not
*/

#include "Not.hpp"

nts::Not::Not() {
    for (size_t i = 1; i < 3; i++) {
        OutputType *status = new OutputType(OutputType::UNDEFINED);
        _pins[i] = status;
    }
}

nts::Not::~Not() {
    if (_pins[2]) {
        delete _pins[2];
        _pins[2] = nullptr;
    }
}

nts::pinType nts::Not::getPinType(std::size_t pin) {
    if (pin > 2 || pin < 1) throw Error("Invalid pin.");
    if (pin == 1)
        return pinType::INPUT;
    if (pin == 2)
        return pinType::OUTPUT;
    return pinType::NONE;
}

void nts::Not::updateOutputPin() {
    OutputType *status;
     if (_pins[2])
        delete _pins[2];

    if (*(_pins[1]) == OutputType::TRUE) {
        status = new OutputType(OutputType::FALSE);
        _pins[2] = status;
        return;
    }
    if (*(_pins[1]) == OutputType::FALSE) {
        status = new OutputType(OutputType::TRUE);
        _pins[2] = status;
        return;
    }
    status = new OutputType(OutputType::UNDEFINED);
    _pins[2] = status;
}