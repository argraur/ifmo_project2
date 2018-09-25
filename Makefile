build: clean
	g++ main.cpp -o binary

clean:
	rm -rf ./binary

run: build
	clear
	./binary
