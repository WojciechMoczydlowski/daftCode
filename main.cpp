#include "ship.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <sstream>

int main()
{

    list<Ship> shipSet;

    Ship ship = Ship("Ulcia jest extra");

    shipSet.push_back(ship);

    DataControler dataController = DataControler();

    dataController.read_data(shipSet);
}