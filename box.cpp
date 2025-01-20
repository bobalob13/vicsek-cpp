#include "box.h"

Box::Box(){

}
Box::Box(double lx, double ly, double x0, double y0){
    this->sidex = lx;
    this->sidey = ly;
    this->x0 = x0;
    this->y0 = y0;
}

double Box::getSidex(){
    return this->sidex;
}
double Box::getSidey(){
    return this->sidey;
}
void Box::setSides(double lx, double ly){
    this->sidex = lx;
    this->sidey = ly;
}
void Box::setOrigin(double x, double y){
    this->x0 = x;
    this->y0 = y;
}