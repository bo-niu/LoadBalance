//
// Created by Bo Niu on 3/5/2020.
//

#include "Node.h"



const string &Node::getServerName() const {
    return serverName;
}

void Node::setServerName(const string &s) {
    Node::serverName = s;
}


Node::Node(int weightindex, string servername) : weightIndex(weightindex), serverName(servername) {}

int Node::getWeightIndex() const {
    return weightIndex;
}

void Node::setWeightIndex(int weightIndex) {
    Node::weightIndex = weightIndex;
}





