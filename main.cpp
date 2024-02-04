#include <iostream>
#include <memory>
#include "components/And.hpp"
#include "special/False.hpp"
#include "special/True.hpp"
#include "components/Not.hpp"

int main() {
    std::unique_ptr<nts::IComponent> gate = std::make_unique<nts::And>();
    std::unique_ptr<nts::IComponent> input1 = std::make_unique<nts::False>();
    std::unique_ptr<nts::IComponent> input2 = std::make_unique<nts::True>();
    std::unique_ptr<nts::IComponent> inverter = std::make_unique<nts::Not>();

    gate->setLink(1, *input1, 1);
    gate->setLink(2, *input2, 1);
    inverter->setLink(1, *gate, 3);

    std::cout << "!(" << input1->compute(1) << " && " << input2->compute(1) << ") -> "
              << inverter->compute(2) << std::endl;

    return 0;
}
