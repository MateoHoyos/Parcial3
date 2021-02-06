#ifndef BALA_H
#define BALA_H
const double pi=3.141617;
const double G=9.8;


class Bala
{

    float Radio;
    float x;
    float y;
    float Vx=0;
    float Vy=0;


public:
    Bala(float R, float vx, float vy, int x, int y);
    float getX();
    float getY();
    float getVx();
    float getVy();
    float getR();
    virtual void movimiento(float t);
    void setX(float x);
    void setY(float y);
};

#endif // BALA_H
