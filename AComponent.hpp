#ifndef ACOMPONENT_HPP
#define ACOMPONENT_HPP

#include "IComponent.hpp"

class AComponent: public IComponent
{
    private:
    public:
        AComponent();
        ~AComponent();
        enum componentType {
            AndComponent,
            FalseComponent,
            TrueComponent,
            NotComponent,
        };
};

#endif