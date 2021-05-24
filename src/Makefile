CC = gcc
CFLAGS = -Wall -Werror -g

JimmyType: main.o wallet.o node.o miner.o
	$(CC) $(CFLAGS) -o JimmyType main.o wallet.o node.o miner.o

main.o: main.c wallet.h node.h miner.h
wallet.o: wallet.c wallet.h
node.o: node.c node.h
miner.o: miner.c miner.h