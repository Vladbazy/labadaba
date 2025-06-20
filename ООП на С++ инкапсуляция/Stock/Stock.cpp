#include "Stock.h"
#include <algorithm>
#include <climits>

Stock::Stock() : next_id(0) {}

Stock::~Stock() {
    for (auto box : boxes) {
        delete box;
    }
}

void Stock::Add(int w, int v) {
    boxes.push_back(new Box(next_id++, w, v));
}

int Stock::GetByW(int min_w) {
    int best_id = -1;
    int min_weight = INT_MAX;

    for (auto box : boxes) {
        if (box->weight >= min_w && box->weight < min_weight) {
            min_weight = box->weight;
            best_id = box->id;
        }
    }

    if (best_id != -1) {
        auto it = std::remove_if(boxes.begin(), boxes.end(),
            [best_id](Box* box) { return box->id == best_id; });
        delete* it;
        boxes.erase(it, boxes.end());
    }

    return best_id;
}

int Stock::GetByV(int min_v) {
    int best_id = -1;
    int min_volume = INT_MAX;

    for (auto box : boxes) {
        if (box->volume >= min_v && box->volume < min_volume) {
            min_volume = box->volume;
            best_id = box->id;
        }
    }

    if (best_id != -1) {
        auto it = std::remove_if(boxes.begin(), boxes.end(),
            [best_id](Box* box) { return box->id == best_id; });
        delete* it;
        boxes.erase(it, boxes.end());
    }

    return best_id;
}