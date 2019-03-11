/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"

// sort the entire vector in ascending order
void sort(std::vector<int>& v) {

	if (v.empty())
		return;

	if (v.size() == 1)
		return;
	
	if (v[0] > v[1]) {
		int t = v[0];
		v[0] = v[1];
		v[1] = t;
	}
}
