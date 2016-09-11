#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>
#include <list>
using namespace std;
void printVector(const vector<int> &vectorOfInts);
void fillVector(vector<int> &vectorOfInts);
void printMap(const multimap<string,int> &mapOfStringInt);
void fillMap(multimap<string,int> &mapOfStringInt);
void fillStack(stack<int> &);
void printStack(stack<int> &);

int main(int argc, const char * argv[]) {
    {
        //vector<int> vectorOfInts;        fillVector(vectorOfInts);
        //sort vector        sort(vectorOfInts.begin(),vectorOfInts.end());         //printVector(vectorOfInts);
        //multimap<string,int> strToNumMap;         fillMap(strToNumMap);         //printMap(strToNumMap);
        ///stack<int> stackOfInts;    //fillStack(stackOfInts);    //printStack(stackOfInts);
    }
    list<int> listOfInts;
    listOfInts.push_back(1);
    listOfInts.push_front(2);
    listOfInts.push_back(4);
    listOfInts.push_front(3);
    for(list<int>::const_iterator it = listOfInts.begin();it!=listOfInts.end();it++) {
        cout<<*it<<endl;
    }
    return 0;
}

void printMap(const multimap<string,int> &mapOfStringInt) {
    for(multimap<string,int>::const_iterator it = mapOfStringInt.begin();it!=mapOfStringInt.end();it++) {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}

void printVector(const vector<int> &vectorOfInts) {
    for(vector<int>::const_iterator it = vectorOfInts.begin();it!=vectorOfInts.end();it++) {
        cout<<*it<<endl;
    }
}

void fillStack(stack<int> &stackOfInts) {
    stackOfInts.push(1);
    stackOfInts.push(2);
    stackOfInts.push(3);
}

void printStack(stack<int> &stackOfInts) {
    cout<<stackOfInts.top()<<endl;
    stackOfInts.pop();
    cout<<stackOfInts.top()<<endl;
    stackOfInts.pop();
    cout<<stackOfInts.top()<<endl;
    stackOfInts.pop();
    if(!stackOfInts.empty()) {
        cout<<stackOfInts.top()<<endl;
    }
}

void fillMap(multimap<string,int> &mapOfStringInt) {
    mapOfStringInt.insert(pair<string, int>("ashwin",6));
    mapOfStringInt.insert(pair<string, int>("kumar",5));
    mapOfStringInt.insert(pair<string, int>("surabhi",7));
    mapOfStringInt.insert(pair<string, int>("surabhi",2));
}

void fillVector(vector<int> &vectorOfInts) {
    vectorOfInts.push_back(1);
    vectorOfInts.push_back(4);
    vectorOfInts.push_back(0);
    vectorOfInts.push_back(6);
    vectorOfInts.push_back(3);
    vectorOfInts.push_back(2);
    vectorOfInts.push_back(5);
}
