#include <sunset.h>
#include <iostream>

/* Linköping */
#define LATITUDE        58.40289106668177
#define LONGITUDE       15.59497091929303
#define TZ_OFFSET      1

int main(int arc, char** argv)
{
    SunSet sun;
    sun.setPosition(LATITUDE, LONGITUDE, TZ_OFFSET);
    sun.setCurrentDate(2020, 12, 02);
   
    int sunrise = static_cast<int>(sun.calcSunrise());
    int sunset = static_cast<int>(sun.calcSunset());
    int civilsunrise = static_cast<int>(sun.calcCivilSunrise());
    int civilsunset = static_cast<int>(sun.calcCivilSunset());
    int nauticalsunrise = static_cast<int>(sun.calcNauticalSunrise());
    int nauticalsunset = static_cast<int>(sun.calcNauticalSunset());
    int astrosunrise = static_cast<int>(sun.calcAstronomicalSunrise());
    int astrosunset = static_cast<int>(sun.calcAstronomicalSunset());
    
    std::cout << "Standard: Sunrise at\t" << (sunrise / 60) << ":" << (sunrise % 60) << "\t Sunset at\t" << (sunset / 60) << ":" << (sunset % 60) << std::endl;
    std::cout << "Civil:    Dawn  at\t" << (civilsunrise / 60) << ":" << (civilsunrise % 60) << "\t Dusk at\t" << (civilsunset / 60) << ":" << (civilsunset % 60) << std::endl;
    std::cout << "Nautical: Dawn  at\t" << (nauticalsunrise / 60) << ":" << (nauticalsunrise % 60) << "\t Dusk at\t" << (nauticalsunset / 60) << ":" << (nauticalsunset % 60) << std::endl;
    std::cout << "Astro:    Dawn  at\t" << (astrosunrise / 60) << ":" << (astrosunrise % 60) << "\t Dusk at\t" << (astrosunset / 60) << ":" << (astrosunset % 60) << std::endl;
}
