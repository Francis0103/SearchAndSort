#include <vector>
#include <iostream>
#include "sort.h"

vector<int> Sort::insertSort(vector<int> input_list) {

    for (int unsort_index = 1; unsort_index < input_list.size(); unsort_index++) {
        int temp = input_list[unsort_index];
        int sort_index = unsort_index - 1;
        while (sort_index >= 0 && input_list[sort_index] > temp) {
            input_list[sort_index + 1] = input_list[sort_index];
            sort_index--; 
        }
        input_list[sort_index + 1] = temp;
    }
    return input_list;
}

void heapSorted_array::build_maxHeap() {
    for(int i = heap_size / 2; i >=1; i--) {
        max_heapify(i);
    }
}

void heapSorted_array::max_heapify(int i) {
    int cur_index = i - 1;
    int left_index = left_node(i) - 1;
    int right_index = right_node(i) - 1;
    int largest = cur_index;
    if (left_index < heap_size && \
        sorted_vector[left_index] > sorted_vector[cur_index])
        largest = left_index;
    if (right_index < heap_size && \
        sorted_vector[right_index] > sorted_vector[largest])
        largest = right_index;
    if (largest != cur_index) {
        int temp = sorted_vector[cur_index];
        sorted_vector[cur_index] = sorted_vector[largest];
        sorted_vector[largest] = temp;
        max_heapify(largest + 1);
    }
}

void heapSorted_array::maxHeap_sort() {
    int last_index = heap_size - 1;
    for(unsigned int i = last_index; i >= 1; i--) {
        int temp = sorted_vector[0];
        sorted_vector[0] = sorted_vector[i];
        sorted_vector[i] = temp;
        heap_size--;
        max_heapify(1);
    }
    heap_size = sorted_vector.size();
}

void heapSorted_array::display() {
    std::cout << "heap_size: " << heap_size << std::endl;
    for(unsigned int i = 0; i < heap_size; i++) {
        std::cout << sorted_vector[i] << " ";
    }
    std::cout << std::endl;
}
    

