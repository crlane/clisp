.PHONY: clean prompt
prompt:
	cc -std=c99 -Wall prompt.c -ledit -o prompt
clean:
	rm *.o temp
