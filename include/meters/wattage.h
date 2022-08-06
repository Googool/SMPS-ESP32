#include <Arduino.h>
#include "current.h"
#include "voltage.h"

void measureWattage() {
    int WATT = CURRENT * VOLTAGE;
}