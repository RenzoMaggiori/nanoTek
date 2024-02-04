/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** IComponent
*/

#ifndef ICOMPONENT_HPP_
#define ICOMPONENT_HPP_

#include <memory>
#include <string>
#include <map>

namespace nts {

    enum pinType {
        INPUT,
        OUTPUT,
        NONE
    };
    enum OutputType {
        FALSE,
        TRUE,
        UNDEFINED,
    };

    class Link;

    class IComponent {
        public:
            // virtual Destructor
            virtual ~IComponent() = default;

            // virtual Setters
            virtual void setLink(std::size_t pin, IComponent &component, std::size_t componentPin) = 0;

            // virtual Getters
            virtual pinType getPinType(std::size_t pin) = 0;
            virtual std::map<std::size_t, std::shared_ptr<nts::OutputType>> &getPins() = 0;
            virtual std::map<std::size_t, std::shared_ptr<Link>> &getLinks() = 0;

            // virtual Member
            //virtual void simulate(std::size_t tick) = 0;
            virtual void updateOutputPin() = 0;
            virtual OutputType compute(std::size_t pin) = 0;
        protected:
        private:
    };
}

#endif
