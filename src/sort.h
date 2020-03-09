#ifndef SRC_INSERTSORT_H_
#define SRC_INSERTSORT_H_

#include <vector>
#include <iostream>
#include <assert.h>

using std::vector;
class Sort {
    public:
        Sort() {}
        vector<int> insertSort(vector<int> input_list);
};

class heapSorted_array {
    public:
        heapSorted_array() {}
        heapSorted_array(vector<int> input_list) {
            heap_size = input_list.size();
            for(unsigned int i = 0; i < heap_size; i++) {
                sorted_vector.push_back(input_list[i]);
            }
            build_maxHeap();
            maxHeap_sort();
        }
        int parent_node(int i) { return i / 2; }
        int left_node(int i) { return i * 2; }
        int right_node(int i) { return i * 2 + 1; }
        void build_maxHeap();
        void max_heapify(int i);
        void maxHeap_sort(); 

        void display();

    private:
        vector<int> sorted_vector;
        int heap_size;

};


// template declaration and definition must be in the same file
template<typename T>
void add(T a, T b) {
    std::cout << "sum is: " << a + b << std::endl;
}

#endif
