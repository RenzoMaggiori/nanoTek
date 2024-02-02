#ifndef ICOMPONENT_HPP
#define ICOMPONENT_HPP

class IComponent
{
    private:
    public:
        virtual ~IComponent() = default;
		virtual void compute(std::size_t pin) = 0;
		virtual void simulate() = 0;
		virtual getLink(std::size_t pin) const = 0;
};


#endif