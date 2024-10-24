#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>
#include <chrono>
#include <fstream>
using namespace std;

int main() {
    vector<string> vector1;
    list<string> list1;
    set<string> set1;
    //Reading
    ifstream fin("codes.txt");
    int i = 0;
    string code;
    while (fin >> vector1[i++]);
    while (fin)
    {
        fin >> code;
        list1.push_back(code);
    }
    while (fin)
    {
        fin >> code;
        set1.insert(code);
    }
    fin.close();
    //Sorting
    sort(vector1.begin(), vector1.end());
    list1.sort();
    //Inserting
    string test = "TESTCODE";
    int mid = 10000;
    vector1.insert(vector1.begin() + mid, test);
    list<string> :: iterator it1 = list1.begin();
    advance(it1, mid);
    list1.insert(it1, test);
    set<string> :: iterator it2 = set1.begin();
    advance(it2, mid);
    set1.insert(it2, test);
    //Deleting
    vector1.erase(vector1.begin()+19999);
    list<string> :: iterator it1 = list1.begin();
    advance(it1, mid);
    list1.erase(it1);
    set<string> :: iterator it2 = set1.begin();
    advance(it2, mid);
    set1.erase(it2);
    
    
    


    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/