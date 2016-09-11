#include <iostream>
#include <map>
using namespace std;

void printMap(const map<string,int> &mapOfStringInt);
void fillMap(map<string,int> &mapOfStringInt);
void insert(map<string,int> &mapOfStringInt, string key, int value);

int main(int argc, const char * argv[]) {
    map<string,int> strToNumMap;
    fillMap(strToNumMap);
    printMap(strToNumMap);
    return 0;
}

void printMap(const map<string,int> &mapOfStringInt) {
    for(map<string,int>::const_iterator it = mapOfStringInt.begin();it!=mapOfStringInt.end();it++) {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}

void fillMap(map<string,int> &mapOfStringInt) {
    insert(mapOfStringInt, "ashwin", 6);
    insert(mapOfStringInt, "kumar", 5);
    insert(mapOfStringInt, "surabhi", 7);
    insert(mapOfStringInt, "surabhi", 2);
}

void insert(map<string,int> &mapOfStringInt, string key, int value) {
    if (mapOfStringInt.count(key) > 0) {
        cout<<"key: "<<key<<" already exists"<<endl;
    } else {
        mapOfStringInt.insert(pair<string, int>(key, value));
        cout<<"key: "<<key<<" and value: "<<value<<" inserted"<<endl;
    }
}

