TEST_FLAGS = -lgtest

setup:
	mkdir -p build

test: setup
	g++ tests/main.cpp $(TEST_FLAGS) -o build/tests.out
	./build/tests.out

stock: setup
	g++ src/main.cpp -o build/stock.out
	./build/stock.out

clean:
	rm -r build