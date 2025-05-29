#pragma once
#include <vector>
#include <string>
using namespace std;

struct AirTicket {
    string passengerName;  // Имя пасажира
    string flightNumber;  // номер рейса
    int seatNumber;  // номер места
    double price; //цена
    bool isBusinessClass;   // бизнес класс
};

vector<AirTicket> readFile(const string& file);
void sortByPrice(vector<AirTicket>& tickets); // сортировка по цене
void sortByPassenger(vector<AirTicket>& tickets);  // сортироввка посажиров
void printTickets(const vector<AirTicket>& tickets); // выводит информацию