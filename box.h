#ifndef BOX_H
#define BOX_H

class Box {
    public:
        Box();
        Box(double sidex, double sidey, double x0, double y0);

        double getSidex();
        double getSidey();
        void setSides(double lx, double ly);
        void setOrigin(double x, double y);

    private:
        double sidex;
        double sidey;
        double x0;
        double y0;
};

#endif