#pragma once
#include <vector>
#include <string>
using namespace std;

struct AirTicket {
    string passengerName;  // ��� ��������
    string flightNumber;  // ����� �����
    int seatNumber;  // ����� �����
    double price; //����
    bool isBusinessClass;   // ������ �����
};

vector<AirTicket> readFile(const string& file);
void sortByPrice(vector<AirTicket>& tickets); // ���������� �� ����
void sortByPassenger(vector<AirTicket>& tickets);  // ����������� ���������
void printTickets(const vector<AirTicket>& tickets); // ������� ����������