#ifndef ANDCOMPONENT_HPP
#define ANDCOMPONENT_HPP

#include "AComponent.hpp"

class AndComponent: public AComponent
{
    private:
        std::size_t _inputPinAmount = 2;
        std::size_t _outputPinAmount = 1;
    public:
        AndComponent() = default;
        ~AndComponent() = default;
};

#endif