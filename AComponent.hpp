/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** AComponent
*/

#ifndef ACOMPONENT_HPP_
#define ACOMPONENT_HPP_

#include "IComponent.hpp"
#include "Link.hpp"
#include <vector>
#include <exception>

namespace nts {
    class AComponent: public IComponent {
        protected:
            std::map<std::size_t, OutputType *> _pins;
            std::map<std::size_t, Link *> _links;
        public:
            // Nested
            class Error: public std::exception
            {
                private:
                    std::string _msg;
                public:
                    Error(std::string msg): _msg(msg) {}
                    const char *what() const noexcept override {
                        return _msg.c_str();
                    }
            };
            // Virtual
            virtual pinType getPinType(std::size_t pin) = 0;
            virtual void updateOutputPin() = 0;

            // Setters
            void setLink(std::size_t pin, IComponent &component, std::size_t componentPin) override;

            // Getters
            std::map<std::size_t, nts::OutputType *> &getPins() override;
            std::map<std::size_t, Link *> &getLinks() override;

            // Member
            // void simulate(std::size_t tick);
            OutputType compute(std::size_t pin) override;

        private:
    };
}

#endif
