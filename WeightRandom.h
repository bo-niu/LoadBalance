//
// Created by Bo Niu on 3/5/2020.
//

#ifndef SMOOTHWEIGHTEDROUNDROBIN_WEIGHTRANDOM_H
#define SMOOTHWEIGHTEDROUNDROBIN_WEIGHTRANDOM_H

#include <vector>
#include "Node.h"
class WeightRandom {

public:
    WeightRandom();

    Node* select();
    void addNode(string name, int weight);

    virtual ~WeightRandom();

private:
    vector<Node*> nodeList;
    int sum;
};


#endif //SMOOTHWEIGHTEDROUNDROBIN_WEIGHTRANDOM_H
