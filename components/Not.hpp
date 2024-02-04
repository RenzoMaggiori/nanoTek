/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** Not
*/

#ifndef NOT_HPP_
#define NOT_HPP_

#include "../AComponent.hpp"

namespace nts {
    class Not: public AComponent {
        public:
            Not();
            ~Not();
            pinType getPinType(std::size_t pin) override;
            void updateOutputPin() override;
        protected:
        private:
    };
}

#endif
