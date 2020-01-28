#
#
# 01/2020


vAds : main.o readDb.o
	gcc -o vAds main.o readDb.o

readDb.o : src/readDb.cpp
	gcc -o readDb.o -c src/readDb.cpp 

main.o : src/main.cpp
	gcc -o main.o -c src/main.cpp 