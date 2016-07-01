CXXFLAGS += -O0 -Wall -Werror -Wextra -Weffc++ -pedantic -std=c++14 $(DEBUG)
STEPS = $(wildcard src/step*.cxx)
TARGETS = $(STEPS:src/%.cxx=%)

.PHONY: all clean

.SUFFIXES: .cxx .o

all: $(TARGETS)

.cxx.o:
	$(COMPILE.cc) -c $< -o $@

$(TARGETS): %: src/%.o
	$(LINK.cc) $^ -o $@

clean:
	rm -rf src/*.o $(TARGETS)
