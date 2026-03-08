#include <iostream>

namespace Traffic
{
    std::string name = "Traffic Light";
    enum class Light
    {
        Red = 6,        //  the traffic light software expects a 6
        Green
    };
}

namespace Paint
{
    std::string name = "Paint Color";
    enum class Color
    {
        Red,
        Orange,
        Yellow,
        Green,
        Blue,
        Purple
    };
}

int main()
{
    Traffic::Light signal = Traffic::Light::Red;
    Paint::Color   wall   = Paint::Color::Red;
    std::cout << "Red!" << static_cast<int>(signal) << " " << static_cast<int>(wall) << std::endl;
}