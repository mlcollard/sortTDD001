# Build and test sort() for std::vector

.PHONY: all
all : sort_t

sort_t : sort.o sort_t.o
	g++ sort.o sort_t.o -o sort_t

sort.o : sort.cpp sort.hpp
	g++ -c sort.cpp

sort_t.o : sort_t.cpp sort.hpp
	g++ -c sort_t.cpp

.PHONY: test
test : sort_t
	./sort_t

.PHONY: clean
clean :
	@rm -f sort_t sort.o sort_t.o
