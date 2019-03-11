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

    void order(int& n1, int& n2) {

        if (n1 > n2)
            swap(n1, n2);
    }
}

// sort the entire vector in ascending order
void sort(std::vector<int>& v) {

    if (v.size() <= 1)
        return;

    order(v[0], v[1]);

    if (v.size() <= 2)
        return;

    order(v[1], v[2]);

    order(v[0], v[1]);

    if (v.size() <= 3)
        return;

    order(v[2], v[3]);

    order(v[0], v[1]);

    order(v[1], v[2]);

    order(v[0], v[1]);
}
