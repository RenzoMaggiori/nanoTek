/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** And
*/

#include "And.hpp"

nts::And::And() {
    std::map<std::size_t, OutputType *> &pins = this->getPins();
    for (size_t i = 1; i < 4; i++) {
        OutputType *status = new OutputType(OutputType::UNDEFINED);
        pins[i] = status;
    }
}

nts::And::~And() {
    std::map<std::size_t, OutputType *> &pins = this->getPins();
    for (std::size_t i = 1; i < 4; i++) {
        delete pins[i];
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
    std::map<std::size_t, OutputType *> &pins = this->getPins();
    OutputType *status;

    if (*(pins[1]) == OutputType::TRUE && *(pins[2]) == OutputType::TRUE) {
        status = new OutputType(OutputType::TRUE);
        pins[3] = status;
        return;
    }
    if (*(pins[1]) == OutputType::FALSE || *(pins[2]) == OutputType::FALSE) {
        status = new OutputType(OutputType::FALSE);
        pins[3] = status;
        return;
    }
    status = new OutputType(OutputType::UNDEFINED);
    pins[3] = status;
}