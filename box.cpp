#include "box.h"

Box::Box(){

}
Box::Box(double lx, double ly, double x0, double y0){
    this->sidex = lx;
    this->sidey = ly;
    this->x0 = x0;
    this->y0 = y0;
}