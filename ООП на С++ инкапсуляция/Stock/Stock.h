#pragma once
#include <vector>

class Stock {
    struct Box {
        int id;
        int weight;
        int volume;
        Box(int id, int w, int v) : id(id), weight(w), volume(v) {}
    };

    std::vector<Box*> boxes;
    int next_id;

public:
    Stock();
    ~Stock();

    void Add(int w, int v);
    int GetByW(int min_w);
    int GetByV(int min_v);
};