CC=gcc
AR=ar -rcs
CFLAGS= -Wall -g
MAIN_SRC= main.c
MAIN_OUT=main.o
MY_MAT_SRC=my_mat.c
MY_MAT_OUT=my_mat.o
MY_MAT_LIB = my_mat.h
EXE=connections


all: ${EXE}


connections: ${MAIN_SRC} my_mat_lib.a
	$(CC) $(CFLAGS) -o ${EXE} ${MAIN_SRC} my_mat_lib.a

my_mat_lib.a: ${MY_MAT_OUT}
	${AR} my_mat_lib.a ${MY_MAT_OUT}

my_mat.o: ${MY_MAT_SRC} ${MY_MAT_LIB}
	$(CC) $(CFLAGS) -c  ${MY_MAT_SRC} -o ${MY_MAT_OUT}

.PHONY: clean all

clean:
	rm -f *.o *.a connections
run:
	./connections