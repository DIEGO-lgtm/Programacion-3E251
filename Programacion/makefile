# Makefile

BIN_DIR = bin
SRC = src/binario.cpp
OUT = $(BIN_DIR)/mi_programa

run: $(OUT)
	./$(OUT)

$(OUT): $(SRC)
	mkdir -p $(BIN_DIR)
	c++ $(SRC) -o $(OUT) -lftxui-component -lftxui-dom -lftxui-screen -std=c++17 -Iinclude

clean:
	rm -rf $(BIN_DIR)