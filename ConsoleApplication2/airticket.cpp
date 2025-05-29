#include "airticket.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

vector<AirTicket> readFile(const string& file) {
    vector<AirTicket> tickets;
    ifstream File(file);
    if (!File.is_open()) {
        cout << "Ошибка при открытии файла" << endl;
        return tickets;
    }

    AirTicket ticket;
    while (File >> ticket.passengerName >> ticket.flightNumber
        >> ticket.seatNumber >> ticket.price) {
        string businessStr;
        File >> businessStr;
        ticket.isBusinessClass = (businessStr == "true");
        tickets.push_back(ticket);
    }
    File.close();
    return tickets;
}

void sortByPrice(vector<AirTicket>& tickets) {
    int n = tickets.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (tickets[j].price < tickets[j + 1].price) {
                swap(tickets[j], tickets[j + 1]);
            }
        }
    }
}

void sortByPassenger(vector<AirTicket>& tickets) {
    int n = tickets.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (tickets[j].passengerName > tickets[j + 1].passengerName) {
                swap(tickets[j], tickets[j + 1]);
            }
        }
    }
}

void printTickets(const vector<AirTicket>& tickets) {
    cout << "Пассажир\tРейс\tМесто\tЦена\tБизнес" << endl;
    for (const auto& ticket : tickets) {
        cout << ticket.passengerName << '\t' << '\t' 
            << ticket.flightNumber << '\t'
            << ticket.seatNumber << '\t'
            << ticket.price << '\t'
            << (ticket.isBusinessClass ? "Да" : "Нет") << endl;
    }
}