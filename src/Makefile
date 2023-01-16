CC  =   gcc -Wall -Wextra -Werror -std=c99
SRC =   main.c
OBJ =   $(SRC:%.c=%.o)

all: install

%.o:    %.c
		$(CC) -c $<

install: uninstall
		mkdir build
		cd build && cmake build ../cpp_dir/qt
		make -C ./build/
		

uninstall:
		rm -Rf build/
		rm -rf Calc.tar

dvi:
		doxygen .
		open html/index.html

dist:
		tar -cf ./Calc.tar ./build/qt.app/Contents/MacOS/qt

tests:
		$(CC) -lgcov -coverage ./testes/test.c ./testes/arithmetic.c ./testes/validate.c $(SRC) -lcheck -lm -lpthread -o test
		./test

gcov_report:
		lcov -t "test" -o test.info -c -d .
		genhtml -o test_output test.info
		@cd ./test_output ; open index.html

clean:
		rm -rf *.gcno *.gcda
		rm -rf test_output
		rm -rf test test.info
		rm -Rf html/ latex/
