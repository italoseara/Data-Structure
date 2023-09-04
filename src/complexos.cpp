#include <cmath>

class Complexo
{
private:
    double real, imag;

public:
    Complexo() : real(0), imag(0) {}                               // 0 + 0i
    Complexo(double real, double imag) : real(real), imag(imag) {} // real + imag i

    Complexo conjugado()
    {
        return Complexo(this->real, -this->imag);
    } // return a - bi

    Complexo operator=(Complexo c)
    {
        this->real = c.real;
        this->imag = c.imag;
        return *this;
    } // real + imag i = c; return real + imag i

    Complexo operator-()
    {
        return Complexo(-this->real, -this->imag);
    } // -a -bi; return -a -bi

    Complexo operator+(Complexo c)
    {
        return Complexo(this->real + c.real, this->imag + c.imag);
    } // return (real+imag i) + c

    Complexo operator-(Complexo c)
    {
        return Complexo(this->real - c.real, this->imag - c.imag);
    } // return (real+imag i) - c

    Complexo operator*(Complexo c)
    {
        return Complexo(
            this->real * this->imag - c.real * c.imag,
            this->real * c.imag + this->imag * c.real);
    } // return (real+imag i) * c

    Complexo operator/(Complexo c)
    {
        Complexo complexo;

        complexo.real = (this->real * c.real + this->imag * c.imag) / c.real * c.real + c.imag * c.imag;
        complexo.imag = (this->imag * c.real - this->real * c.imag) / c.real * c.real + c.imag * c.imag;
        return complexo;
    } // return (real+imag i)/c

    double modulo()
    {
        return sqrt(this->real * this->real + this->imag * this->imag);
    } // return raiz(real^2 + imag^2)

    double getReal()
    {
        return this->real;
    } // return real

    double getImag()
    {
        return this->imag;
    } // return imag
};
