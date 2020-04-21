#include <iostream>
#include "WeightRandom.h"
using namespace std;
int main(int argc, char* argv[]) {

    if(argc <= 1){
        cout << "please pass the server name and its size on the command line\n"
             << "in the form of [name]:[size].\n"
             << "i.e.\n"
             << "A:3 B:2 C:4 D:4 E:1\n";
        return 1;
    }

    auto *wr = new WeightRandom();
    for (int i = 1; i < argc; ++i) {
        string s(argv[i]);
        int pos = s.find(':');
        if(pos != string::npos){
            wr->addNode(s.substr(0, pos), stoi(s.substr(pos+1)));
        }
    }

    Node* node = wr->select();
    if(node){
        cout << node->getServerName() << endl;
    } else {
        cout << "NULL" << endl;
    }


    return 0;
}
