#ifndef SRC_INSERTSORT_H_
#define SRC_INSERTSORT_H_

#include <vector>
#include <iostream>
#include <assert.h>

using std::vector;

template<typename T>
void display(T sorter) {
    for(unsigned int i = 0; i < sorter.heap_size; i++) {
        std::cout << sorter.sorted_vector[i] << " "; 
    }
    std::cout << std::endl;
}

class Sort {
    public:
        Sort() {}
        Sort(vector<int> input_list) {
            heap_size = input_list.size();
            for(unsigned int i = 0; i < heap_size; i++) {
                sorted_vector.push_back(input_list[i]);
            }
        }
        vector<int> insertSort(vector<int> input_list);
    private:
        vector<int> sorted_vector;
        int heap_size;
        
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

        friend void say_size(heapSorted_array array);
    private:
        vector<int> sorted_vector;
        int heap_size;

};

class quick_sort {
    public:
        quick_sort() {}
        quick_sort(vector<int> input_list) {
            heap_size = input_list.size();
            for(unsigned int i = 0; i < heap_size; i++) {
                sorted_vector.push_back(input_list[i]);
            }
            quick_sorted(0, heap_size - 1);
        }
        int partition(int begin, int end);
        void quick_sorted(int begin, int end);
        template<typename T>
        friend void display(T sorter);

    private:
        vector<int> sorted_vector;
        int heap_size;
};

class counting_sort {
    public:
        counting_sort() {}
        counting_sort(vector<int> input_list) {
            heap_size = input_list.size();
            for(unsigned int i = 0; i < heap_size; i++) {
                sorted_vector.push_back(input_list[i]);
            }
            counting_sorted();
        }

        void counting_sorted();

        ~counting_sort() {
            
        }

        template<typename T>
        friend void display(T sorter);

    private:
        vector<int> sorted_vector;
        int heap_size;
};

class base_sort {
    public:
        base_sort() {}
        base_sort(vector<int> input_list) {
            heap_size = input_list.size();
            for(unsigned int i = 0; i < heap_size; i++) {
                sorted_vector.push_back(input_list[i]);
            }
            
        }
        void base_sorted();
        void base_num(int n);

    private:
        vector<int> sorted_vector;
        int heap_size;

};

void say_size(heapSorted_array array);

// template declaration and definition must be in the same file
template<typename T>
void add(T a, T b) {
    std::cout << "sum is: " << a + b << std::endl;
}


#endif
