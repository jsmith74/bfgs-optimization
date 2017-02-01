CC = g++
OBJS = main.o MeritFunction.o BFGS_Optimization.o
CFLAGS = -O3 -c
LFLAGS = -O3
INCLUDE = -I /home/jake/Documents/EIGEN

all: a.out

a.out: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS)

main.o: main.cpp
	$(CC) $(CFLAGS) $(INCLUDE) main.cpp

MeritFunction.o: MeritFunction.cpp
	$(CC) $(CFLAGS) $(INCLUDE) MeritFunction.cpp

BFGS_Optimization.o: BFGS_Optimization.cpp
	$(CC) $(CFLAGS) $(INCLUDE) BFGS_Optimization.cpp

clean:
	rm *.o a.out
