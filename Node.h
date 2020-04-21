//
// Created by Bo Niu on 3/5/2020.
//

#ifndef SMOOTHWEIGHTEDROUNDROBIN_NODE_H
#define SMOOTHWEIGHTEDROUNDROBIN_NODE_H

#include <string>
using namespace std;
class Node {

public:
    Node(int weightindex, string servername);

    const string &getServerName() const;

    void setServerName(const string &serverName);

    int getWeightIndex() const;

    void setWeightIndex(int weightIndex);

private:
    int weightIndex;
    string serverName;
};


#endif //SMOOTHWEIGHTEDROUNDROBIN_NODE_H
