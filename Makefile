##########################################
#           Editable options             #
##########################################

# Compiler options
CC=g++
CFLAGS=-c -Wall
EXECUTABLE_NAME=geometry

# Folders
SRC=src
BIN=build
OBJ=bin

# Files
SOURCE_FILES= Circle.cpp Triangle.cpp main.cpp

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
	@rm -r -f $(BIN)

all: build

run: build
	@echo ""
	@echo "-------------"
	@echo ""
	@./$(BIN)/$(EXECUTABLE_NAME)