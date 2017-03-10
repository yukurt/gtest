#ifndef _PAINTER_HPP_
#define _PAINTER_HPP_

#include "turtle.hpp"

class Painter
{
public:
    Painter(Turtle* turtle) : m_turtle(turtle) { }

    bool DrawCircle(int x, int y, int rad)
    {
        ++x;
        ++y;
        ++rad;

        m_turtle->PenDown();

        return true;
    }

    bool DrawSquare(int x, int y, int length)
    {
        m_turtle->PenUp();
        m_turtle->GoTo(x, y);
    
        m_turtle->PenDown();
        m_turtle->GoTo(x, y + length);
        m_turtle->GoTo(x + length, y + length);
        m_turtle->GoTo(x + length, y);
        m_turtle->GoTo(x, y);
    
        m_turtle->PenUp();

        return true;
    }

    int GetTurtleXLocation()
    {
        return m_turtle->GetX();
    }

    int GetTurtleYLocation()
    {
        return m_turtle->GetY();
    }

    void DrawPolygon(int x_start, int y_start, int num_sides, int side_length)
    {
        m_turtle->PenUp();
        m_turtle->GoTo(x_start, y_start);
        m_turtle->PenDown();

        float angle_increment = 360.0 / num_sides;

        for (int i = 0; i < num_sides; ++i)
        {
            m_turtle->Turn(angle_increment * i);
            m_turtle->Forward(side_length);
        }

        m_turtle->PenUp();
    }

private:
    Turtle* m_turtle;
};

#endif // _PAINTER_HPP_
