/**
* Leomart Crisostomo and Alondra Tlatelpa
* CIS 22A M/W 9:30am
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double weight;
    string planet;
    const double MERCURY_MULT = 0.38;
    const double VENUS_MULT = 0.91;
    const double MARS_MULT = 0.38;
    const double JUPITER_MULT = 2.54;
    const double SATURN_MULT =  1.08;
    const double URANUS_MULT = 0.91;
    const double NEPTUNE_MULT = 1.19;
    const double PLUTO_MULT = 0.06;
    cout << "Welcome! This program can calculate how much you weigh in any of the planets in our solar system.\n";
    cout << "Frist, please enter your weight in pounds: ";
    cin >> weight;
    cout << "Next, select from one of the following plantes:" << endl;
    cout << "\tMercury" << endl <<"\tVenus" << endl << "\tMars" << endl << "\tJupiter" << endl;
    cout << "\tSaturn" << endl << "\tUranus" << endl << "\tNeptune" << endl << "\tPluto" << endl;
    cout << "Please enter the name of the planet: " ;
    cin >> planet;
    if (planet == "mercury" || planet == "Mercury")
    {
        weight = weight * MERCURY_MULT;
    }
    else if (planet == "venus" || planet == "Venus")
    {
        weight = weight * VENUS_MULT;
    }
    else if (planet == "mars" || planet == "Mars")
    {
        weight = weight * MARS_MULT;
    }
    else if (planet == "jupiter" || planet == "Jupiter")
    {
        weight = weight * JUPITER_MULT;
    }
    else if (planet == "saturn" || planet == "Saturn")
    {
        weight = weight * SATURN_MULT;
    }
    else if (planet == "uranus" || planet == "Uranus")
    {
        weight = weight * URANUS_MULT;
    }
    else if (planet == "neptune" || planet == "Neptune")
    {
        weight = weight * NEPTUNE_MULT;
    }
    else if (planet == "pluto" || planet == "Pluto")
    {
        weight = weight * PLUTO_MULT;
    }
    else
    {
        cout << "You entered an invalid name for a planet. Please re-run the program to try again." ;
        return 1;
    }
    cout << fixed << setprecision(1) ;
    cout << "You weigh " << weight << " pounds on " << planet << "." ;
}
