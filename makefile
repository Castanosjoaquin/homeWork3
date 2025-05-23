run-1: 
	g++  -Wall -Wextra -Wpedantic -Werror -Wconversion -Wsign-conversion -Wshadow -Wnull-dereference -Wfloat-equal -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wformat=2 -Wcast-align -Wstrict-overflow=5 -Wunsafe-loop-optimizations -Wuseless-cast -Wmissing-include-dirs -Wold-style-cast -Woverloaded-virtual -Wnon-virtual-dtor -Wzero-as-null-pointer-constant -Wmissing-declarations -Weffc++ -Wstack-protector  ej1/source/*.cpp ej1/examples/main.cpp -o Ej1
	valgrind ./Ej1
run-2: 
	g++  -Wall -Wextra -Wpedantic -Werror -Wconversion -Wsign-conversion -Wshadow -Wnull-dereference -Wfloat-equal -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wformat=2 -Wcast-align -Wstrict-overflow=5 -Wunsafe-loop-optimizations -Wuseless-cast -Wmissing-include-dirs -Wold-style-cast -Woverloaded-virtual -Wnon-virtual-dtor -Wzero-as-null-pointer-constant -Wmissing-declarations -Weffc++ -Wstack-protector  ej2/sources/*.cpp ej2/examples/main.cpp -o Ej2
	valgrind ./Ej2
run-3: 
	g++  -Wall -Wextra -Wpedantic -Werror -Wconversion -Wsign-conversion -Wshadow -Wnull-dereference -Wfloat-equal -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wformat=2 -Wcast-align -Wstrict-overflow=5 -Wunsafe-loop-optimizations -Wuseless-cast -Wmissing-include-dirs -Wold-style-cast -Woverloaded-virtual -Wnon-virtual-dtor -Wzero-as-null-pointer-constant -Wmissing-declarations -Weffc++ -Wstack-protector  ej3/examples/main.cpp -o Ej3
	valgrind ./Ej3