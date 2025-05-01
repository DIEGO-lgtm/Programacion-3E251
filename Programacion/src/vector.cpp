#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<string> nombres;
    nombres.emplace_back("Ramon");
    nombres.emplace_back("Sofia");
    nombres.emplace_back("Carmen salinas");
 
    cout << nombres.at(3) << endl;
    

    for (auto &&nombre : nombres)
    {
        cout << nombre << endl;
    }

    return 0;
}
