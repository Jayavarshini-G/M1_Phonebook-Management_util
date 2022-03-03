# Name of the project
PROJECT_NAME = PhoneBook

# Output directory
BUILD = build

# All source code files
SRC = src/main.c\
src/menu.c\
src/name.c\
src/find.c\
src/list.c\
src/deleted.c\
src/exit.c\

# All test source files
TEST_SRC = $(SRC)\
test/phone_book_test.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -I inc\
-I unity\

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

#Library Inlcudes
INCLUDE_LIBS = 

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).$(EXEC)

# Document files
$(DOCUMENTATION_OUTPUT) :
	mkdir documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc phone_book.c $(SRC) $(INC) -o $(PROJECT_OUTPUT).$(EXEC)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).$(EXEC)

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) $(BUILD) $(DOCUMENTATION_OUTPUT) contacts.bin

# Create new build folder if not present
$(BUILD):
	mkdir build
