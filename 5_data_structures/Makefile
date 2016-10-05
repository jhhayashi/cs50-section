CC = gcc
#CFLAGS = -Wall -lcs50
#CFLAGS = -w -lcs50
CFLAGS = -lcs50

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	-@rm *hashtables *huffman *linked_lists *queues *stacks *structs *tries 2>/dev/null || true
