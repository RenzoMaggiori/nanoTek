#include <iostream>
#include <memory>
#include "components/AndComponent.hpp"
#include "special/FalseComponent.hpp"
#include "special/TrueComponent.hpp"
#include "components/NotComponent.hpp"

int main() {
    std::unique_ptr<nts::IComponent> gate = std::make_unique<nts::AndComponent>();
    std::unique_ptr<nts::IComponent> input1 = std::make_unique<nts::FalseComponent>();
    std::unique_ptr<nts::IComponent> input2 = std::make_unique<nts::TrueComponnet>();
    std::unique_ptr<nts::IComponent> inverter = std::make_unique<nts::NotComponent>();

    gate->setLink(1, *input1, 1);
    gate->setLink(2, *input2, 1);
    inverter->setLink(1, *gate, 3);

    std::cout << "!(" << input1->compute(1) << " && " << input2->compute(1) << ") -> "
              << inverter->compute(2) << std::endl;

    return 0;
}
