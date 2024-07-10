#ifndef COMPLEX_H
#define COMPLEX_H
class Complex{
    public:
    Complex(int real =0, int img =0);
    ~Complex();
    static int getCounter();
    private:
    static int instanceCounter;
    int m_real;
    int m_img;
};

#endif