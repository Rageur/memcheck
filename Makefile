CXX= g++
CXXFLAGS= -Wall -Wextra -Werror -std=c++14 -pedantic -I include

SRC_LVL1= $(addsuffix .cc, $(addprefix src/level1/, mem_strace level1 checker display))

all: $(SRC_LVL1)
		$(CXX) $(CXXFLAGS) $^ -o mem_strace
