SRC = src/main.c\
src/name.c\
src/menu.c\
src/list.c\
src/find.c\
src/deleted.c\
src/exit.c\


INC = -Iinc\

PROJECT_NAME = Phonebook-Management.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME) -lncurses

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(PROJECT_NAME)
	./${PROJECT_NAME}
	gcov -a src/name.c src/menu.c  src/list.c  src/find.c  src/deleted.c  src/exit.c 
