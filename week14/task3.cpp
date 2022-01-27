#include <iostream>
using namespace std;

const int SPEED = 299792;

struct Planet
{
    char name[20];
    int distanceFromSun;
    double diameter;
    double mass;

    void createPlanet()
    {
        cout << "Enter name: ";
        cin.getline(name, 20);
        cout << "Enter distance from Sun: ";
        cin >> distanceFromSun;
        cout << "Enter diameter: ";
        cin >> diameter;
        cout << "Enter mass: ";
        cin >> mass;
        cin.ignore();
    }

    void printPlanet()
    {
        cout << endl << name << endl;
        cout << "Distance from Sun: " << distanceFromSun << endl;
        cout << "Diameter: " << diameter << endl;
        cout << "Mass: " << mass << endl;
    }

    double timeToSun()
    {
        return distanceFromSun / SPEED;
    } 
};

int main()
{
    Planet planets[4];

    for(int i = 0; i < 4; i++)
    {
        planets[i].createPlanet();
    }
    
    for(int i = 0; i < 4; i++)
    {
        planets[i].printPlanet();
        cout << "Time sunlight reaches the planet: " << planets[i].timeToSun() << endl;
    }
}