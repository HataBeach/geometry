##########################################
#           Editable options             #
##########################################
.PHONY: clean
# Compiler options
CC=g++ -std=c++11
CFLAGS=-c -Wall -std=c++11
EXECUTABLE_NAME=geometry

# Folders
SRC=src
BIN=build
OBJ=bin

# Files
SOURCE_FILES= Circle.cpp Triangle.cpp Pars.cpp main.cpp

##########################################
#    Don't touch anything below this     #
##########################################
OBJECT_FILES=$(addprefix $(OBJ)/, $(SOURCE_FILES:.cpp=.o))

build: create_directories create_executable
	@echo "Build successful!"

create_executable: create_objects
	@mkdir build
	@$(CC) $(OBJECT_FILES) -o $(BIN)/$(EXECUTABLE_NAME)
	@echo "Created executable."

create_objects: $(SOURCE_FILES)
	@echo "Created objects."

create_directories:
	@mkdir -p $(OBJ)

%.cpp:
	@echo "Compiling "$@
	@$(CC) -c $(SRC)/$@ -o $(OBJ)/$(patsubst %.cpp,%.o,$@)

clean:
	@rm -r -f $(OBJ)
	@rm -r -f $(BIN)


all: build

run: build
	@echo ""
	@echo "-------------"
	@echo ""
	@./$(BIN)/$(EXECUTABLE_NAME)

GTEST_LIB_DIR = thirdparty/googletest

USER_DIR = src

USER_DIR_O = bin

USER_DIR_b = bin

CPPFLAGS += -isystem thirdparty/googletest/include

CXXFLAGS += -g -Wall -Wextra -pthread -std=c++11

GTEST_LIBS = libgtest.a libgtest_main.a

TESTS = Pars_unittest.cpp

GTEST_HEADERS = $(GTEST_LIB_DIR)/include/gtest/*.h \
                $(GTEST_LIB_DIR)/include/gtest/internal/*.h

test: $(TESTS)


$(TESTS) : $(USER_DIR_O)/Pars.o $(USER_DIR_O)/Pars_unittest.o
	mkdir bin build
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -L$(GTEST_LIB_DIR)/lib -lgtest_main -lpthread $^ -o $(USER_DIR_b)/Test

$(USER_DIR_O)/Pars_unittest.o : test/Pars_unittest.cpp \
                     $(USER_DIR)/Pars.h $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c test/Pars_unittest.cpp -o $@

$(USER_DIR_O)/Pars.o : $(USER_DIR)/Pars.cpp $(USER_DIR)/Pars.h $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $(USER_DIR)/Pars.cpp -o $@
