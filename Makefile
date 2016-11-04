all: a.out

a.out: main.o MeritFunction.o BFGS_Optimization.o
	g++ -O3 main.o MeritFunction.o BFGS_Optimization.o

main.o: main.cpp
	g++ -O3 -c -I /home/jake/Documents/EIGEN main.cpp

MeritFunction.o: MeritFunction.cpp
	g++ -O3 -c -I /home/jake/Documents/EIGEN MeritFunction.cpp

BFGS_Optimization.o: BFGS_Optimization.cpp
	g++ -O3 -c -I /home/jake/Documents/EIGEN BFGS_Optimization.cpp

clean:
	rm *.o a.out
