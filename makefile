hexReader: driver.o
	g++ -o hexReader main.o
driver.o: main.cpp
	g++ -c main.cpp
clean:
	rm *.o hexReader
