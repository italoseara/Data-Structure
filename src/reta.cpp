using namespace std;

class Reta
{
private:
    double a, b;

public:
    Reta() : a(0), b(0) {}
    Reta(double a, double b) : a(a), b(b) {}
    Reta(double a, double b, double c) : a(a / c), b(b / c) {}

    bool horizontal() // retorna true se a == 0, false caso contrario
    {
        return this->a == 0;
    }

    bool vertical() // retorna true se b == 0, false caso contrário
    {
        return this->b == 0;
    }

    bool paralela(Reta r) // retorna true se (a == r.a == 0, ou b == r.b == 0, ou a/b==r.a/r.b)
    {
        return (this->a == r.a && this->a == 0 ||
                this->b == r.b && this->b == 0 ||
                this->a / this->b == r.a / r.b);
    }
};
