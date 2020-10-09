bin/main : src/main.cpp lib/libvector_math.a Makefile
	g++ -I include -o bin/main src/main.cpp -L lib -l vector_math

lib/libvector_math.a : lib/vector_math.o lib/vector_helpers.o Makefile
	ar rs lib/libvector_math.a lib/vector_math.o lib/vector_helpers.o

lib/vector_math.o : src/vector_math.cpp Makefile
	g++ -I include -c -o lib/vector_math.o src/vector_math.cpp

lib/vector_helpers.o : src/vector_helpers.cpp Makefile
	g++ -I include -c -o lib/vector_helpers.o src/vector_helpers.cpp

