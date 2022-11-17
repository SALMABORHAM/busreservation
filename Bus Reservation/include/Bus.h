#ifndef BUS_H
#define BUS_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Bus {
  private:
            int    busNumber;
            string   driverName, start,   destination,   departure, arrival ,  seats[8] [4];
            static  vector<Bus>  buses;      //Create static vector
public:
    Bus();
    void addBus();
    void reserveSeat();
    void showBus();
    void showAllBuses();
    friend ostream  &operator<< (ostream  &out, const Bus &b);
    friend istream  &operator>>(istream  &in,  Bus &b);
    void printLine(char c);
     void printSeats(int busIndex);
    int getBusIndex();
};
#endif // BUS_H
