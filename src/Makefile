Target=../bin/air_traffic

all: air_traffic
	gcc air_traffic.o -o $(Target)

air_traffic.o: air_traffic.c
	gcc -c air_traffic.c

clean:
	rm $(Target) *.o