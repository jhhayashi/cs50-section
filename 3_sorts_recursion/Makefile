CC = gcc
#CFLAGS = -Wall -lcs50
#CFLAGS = -w -lcs50
CFLAGS = -lcs50

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	-@rm arrays arrays.txt pointers swap0 swap1 mergesort 2>/dev/null || true
