/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** Not
*/

#include "Not.hpp"

nts::Not::Not() {
    std::map<std::size_t, OutputType *> &pins = this->getPins();
    for (size_t i = 1; i < 3; i++) {
        OutputType *status = new OutputType(OutputType::UNDEFINED);
        pins[i] = status;
    }
}

nts::Not::~Not() {
    std::map<std::size_t, OutputType *> &pins = this->getPins();
    for (std::size_t i = 1; i < 3; i++) {
        delete pins[i];
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
    std::map<std::size_t, OutputType *> &pins = this->getPins();
    
    if (*(pins[1]) == OutputType::TRUE) {
        status = new OutputType(OutputType::FALSE);
        pins[2] = status;
        return;
    }
    if (*(pins[1]) == OutputType::FALSE) {
        status = new OutputType(OutputType::TRUE);
        pins[2] = status;
        return;
    }
    status = new OutputType(OutputType::UNDEFINED);
    pins[2] = status;
}