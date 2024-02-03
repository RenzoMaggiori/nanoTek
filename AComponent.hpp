#ifndef ACOMPONENT_HPP
#define ACOMPONENT_HPP

#include <string>
#include <map>
#include "IComponent.hpp"

enum types {
    FALSE,
    TRUE,
    UNDEFINED,
};
class AComponent: public IComponent
{
    private:
        std::map<std::size_t, AComponent *> _links;
        std::pair<std::size_t, std::size_t> _pins;
    public:
        virtual ~AComponent() = default;
        std::size_t compute(std::size_t pin);
        void setPins(std::size_t input, std::size_t output);
};

#endif