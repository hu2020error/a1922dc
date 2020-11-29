test:queue.c testq.c
	gcc -g testq.c queue.c -o test
s:
	./test


clean:
	rm test
