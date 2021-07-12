export Exe := matric
export C_files := $(wildcard *.cpp)
export o_files := $(patsubst %.cpp, %.o, $(C_files))

prefix = ../bin
$Exe :$(o_files) 
	g++ $^ -o ../bin/$@

%.o : %.cpp
	g++ -c $^ -o $@

clean :
	rm -r *.o $(Exe)
