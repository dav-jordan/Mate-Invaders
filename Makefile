
all:  
	g++ -std=c++11 *.cpp *.h
exe:
	g++ -std=c++11 *.cpp *.h -o main
Entity:
	g++ -std=c++11 Entity.h Entity.cpp
Player:
	g++ -std=c++11 Player.h Player.cpp

clean:
	rm -f *.o *.out *.gch main
