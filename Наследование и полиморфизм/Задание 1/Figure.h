#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

class Figure {
public:
    virtual ~Figure() = default;

    virtual double calc_area() = 0;

    virtual void show() = 0;
};


#endif // FIGURE_H_INCLUDED