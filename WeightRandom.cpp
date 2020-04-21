//
// Created by Bo Niu on 3/5/2020.
//

#include "WeightRandom.h"
#include <chrono>
using namespace chrono;
Node* WeightRandom::select() {

    Node* node = nullptr;

    std::chrono::time_point<std::chrono::system_clock> tpSys = std::chrono::system_clock::now();
    std::chrono::time_point<std::chrono::system_clock, std::chrono::microseconds> tpMicro
            = std::chrono::time_point_cast<std::chrono::microseconds>(tpSys);
    std::uint64_t totalMicroSeconds = tpMicro.time_since_epoch().count();
    int decimalFractionMicros = (int)((std::uint64_t)tpMicro.time_since_epoch().count() % 1000000);
//    printf("%d\n", decimalFractionMicros);
    srand(decimalFractionMicros);

    int r = rand() % sum + 1;
    for (auto n : nodeList) {
        if(r <= n->getWeightIndex()){
            node = n;
            break;
        }
    }

    return node;
}

void WeightRandom::addNode(string name, int weight) {
    sum += weight;
    Node *n = new Node(sum, name);
    nodeList.push_back(n);
}

WeightRandom::WeightRandom() {
    sum = 0;
}

WeightRandom::~WeightRandom() {

    for (auto & i : nodeList) {
        delete i;
    }
}
