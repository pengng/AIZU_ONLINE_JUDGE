#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

int main()
{
    unordered_map< string, list<int> > map;
    char str[31];
    int i;

    while (scanf("%s %d", str, &i)) {
        if (map.find(str) != map.end()) {
            for (list<int>::iterator it = map[str].first(); it != map[str].end(); it++) {
                if (*(it + 1) >= i) {
                    map[str].insert(it, i);
                }
            }
        } else {
            map[str].push_back(i);
        }
    }
}