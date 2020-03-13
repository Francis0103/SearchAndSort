#include <iostream>
#include "sort.h"
#include <vector>
using std::vector;
int main() {

    std::cout << "This is the begining." << std::endl;
    Sort sort;
    vector<int> unorder{2, 5, 7, 1, 2, 8, 9};
    // vector<int> unorder{2, 5, 7};
    vector<int> res;
    std::cout << "insert sort:" << std::endl;
    res = sort.insertSort(unorder);
    for(int i = 0; i < unorder.size(); i++) {
        std::cout << res[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "heap sort:" << std::endl;
    heapSorted_array heap_array(unorder);
    heap_array.display();
    say_size(heap_array);

    std::cout << "quick sort:" << std::endl;
    quick_sort quicker(unorder);
    display(quicker);

    std::cout << "counting sort:" << std::endl;
    counting_sort counter(unorder);
    display(counter);

    std::cout << "*******************" << std::endl;
    add(1.5, 2.5);
    return 0;

}
