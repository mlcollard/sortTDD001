/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"

namespace {

    void swap(int& n1, int& n2) {
        int t = n1;
        n1 = n2;
        n2 = t;
    }
}

// sort the entire vector in ascending order
void sort(std::vector<int>& v) {

    if (v.size() <= 1)
        return;

    if (v[0] > v[1]) {
        swap(v[0], v[1]);
    }
}
