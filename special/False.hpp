/*
** EPITECH PROJECT, 2024
** nanoTek
** File description:
** False
*/

#ifndef FALSE_HPP_
#define FALSE_HPP_

#include "../AComponent.hpp"

namespace nts
{
    class False: public AComponent{
        public:
            False();
            ~False();
            pinType getPinType(std::size_t pin) override;
            void updateOutputPin() override;
        protected:
        private:
    };
}

#endif /* !FALSE_HPP_ */
