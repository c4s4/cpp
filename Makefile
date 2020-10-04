BUILD_DIR=out

.PHONY: main
main: clean
	g++ -o $(BUILD_DIR)/main main.cpp
	$(BUILD_DIR)/main

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)
	mkdir $(BUILD_DIR)
