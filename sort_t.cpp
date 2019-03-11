/*
    sort_t.cpp

    Test program for sort functions
*/

#include "sort.hpp"
#include <cassert>
#include <vector>

int main() {

	{
		std::vector<int> v;

		assert(v.empty());
		assert(v.size() == 0);
		sort(v);
		assert(v.empty());
		assert(v.size() == 0);
	}

    return 0;
}
