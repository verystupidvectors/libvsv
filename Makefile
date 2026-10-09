SOURCES=vsv.c
HEADERS=vsv.h
OUT=libvsv.so
CFLAGS := $(CFLAGS) -std=c90 -shared -fPIC -Wpedantic -fsanitize=address,undefined -g

all: $(OUT) examples docs

$(OUT): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES) -o $(OUT)

examples:
	$(MAKE) -C ex

docs:
	doxygen -q

clean:
	rm -f libvsv.so
