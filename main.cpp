#include <iostream>
#include "insertSort.h"
#include <vector>
using std::vector;
int main() {

    std::cout << "This is the begining." << std::endl;
    Sort sort;
    // vector<int> unorder{2, 5, 7, 1, 2, 8, 9};
    vector<int> unorder{2, 5, 7};
    vector<int> res;
    res = sort.insertSort(unorder);
    for(int i = 0; i < unorder.size(); i++) {
        std::cout << res[i] << std::endl;
    }

    return 0;

}
