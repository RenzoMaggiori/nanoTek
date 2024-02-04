/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** And
*/

#ifndef AND_HPP_
#define AND_HPP_

#include "../AComponent.hpp"

namespace nts {
    class And: public AComponent {
        public:
            And();
            ~And();
            pinType getPinType(std::size_t pin) override;
            void updateOutputPin() override;
        protected:
        private:
    };
}

#endif