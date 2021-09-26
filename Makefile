test: test.c
	mpicc  test.c -o test

main : main.cc test.cc
#	g++ main.cc -o main -std=c++17
	g++ main.cc test.cc -o main 
#	g++ main.cc -fno-elide-constructors -o main


