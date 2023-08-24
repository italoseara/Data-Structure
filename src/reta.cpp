using namespace std;

class Reta
{
private:
    double a, b;

public:
    void reta() // deve criar a reta x = 0
    {
        // ??
    }

    void reta(double a, double b) // deve criar a reta ax + by = 1
    {
        this->a = a;
        this->b = b;
    }

    void reta(double a, double b, double c) // deve criar a reta (a/c)x + (b/c)y = 1
    {
        this->a = a / c;
        this->b = b / c;
    }

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
