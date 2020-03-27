// File Name: rb_main.cpp
// Author: tangqing
// Created Time: Fri 27 Mar 2020 05:23:54 PM CST

#include<vector>
#include<algorithm>
#include "rb.h"

using namespace std;

/*
 *       1
 *   2       3
 *4    5   6    7
 *
*/
int main(){
    Node d1(1, nullptr, nullptr, nullptr);
    Node d2(2, nullptr, nullptr, nullptr);
    Node d3(3, nullptr, nullptr, nullptr);
    Node d4(4, nullptr, nullptr, nullptr);
    Node d5(5, nullptr, nullptr, nullptr);
    Node d6(6, nullptr, nullptr, nullptr);
    Node d7(7, nullptr, nullptr, nullptr);
    d1.left = &d2;
    d1.right = &d3;
    d2.left = &d4;
    d2.right = &d5;
    d3.left = &d6;
    d3.right = &d7;
    inOrder(&d1);

return 0;
}
