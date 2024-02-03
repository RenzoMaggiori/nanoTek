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
        std::map<size_t, AComponent *> _links;
    public:
        virtual ~AComponent() = default;
};

#endif