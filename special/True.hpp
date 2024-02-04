/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** True
*/

#ifndef TRUE_HPP_
#define TRUE_HPP_

#include "../AComponent.hpp"

namespace nts {
    class True: public AComponent {
        public:
            True();
            pinType getPinType(std::size_t pin) override;
            void updateOutputPin() override;
        protected:
        private:
    };
}

#endif