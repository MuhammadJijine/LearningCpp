#include "Ball.h"

Ball::Ball (double radius)
{
    m_radius=radius;
    m_color="Black";
}
Ball::Ball (const std::string &color,double radius )
{
    m_color=color;
    m_radius=radius;
}
void Ball::print ()
{
    std::cout << "Color : " << m_color << ",  " << "Radius : " << m_radius << std::endl;  
}