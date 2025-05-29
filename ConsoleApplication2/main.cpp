#include <iostream>
#include "airticket.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    vector<AirTicket> tickets = readFile("tickets.txt");

    if (tickets.empty()) {
        cout << "Файл пуст или не найден" << endl;
        return 1;
    }

    cout << "Список авиабилетов:" << endl;
    printTickets(tickets);

    sortByPrice(tickets);
    cout << "\nСортировка по цене (дорогие сначала):" << endl;
    printTickets(tickets);

    sortByPassenger(tickets);
    cout << "\nСортировка по пассажирам (А-Я):" << endl;
    printTickets(tickets);

    return 0;
}