#include <vector>
#include <iostream>
#include "insertSort.h"

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


