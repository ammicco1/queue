FLAGS = -Wall -ansi -pedantic
OBJS = queue_main.o key.o element.o queue.o
EXEC = queue_main

$(EXEC): $(OBJS)
	gcc $(FLAGS) -o $(EXEC) $(OBJS)

$(EXEC).o: $(EXEC).c
	gcc $(FLAGS) -c $(EXEC).c

queue.o: queue.c
	gcc $(FLAGS) -c queue.c

element.o: element.c
	gcc $(FLAGS) -c element.c

key.o: key.c
	gcc $(FLAGS) -c key.c

clean: 
	rm -f *.o $(EXEC) $(OBJS)