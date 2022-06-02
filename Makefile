all: clear compile run

compile:
	g++ -std=c++11 -c Buldozer.cpp Humanic.cpp OptimusPrime.cpp Robocop.cpp Roomba.cpp Robot.cpp main.cpp
	g++ -std=c++11 Buldozer.o Humanic.o OptimusPrime.o Robocop.o Roomba.o Robot.o main.o -o hw4
run:
	./hw4
	
clear:
	@clear
