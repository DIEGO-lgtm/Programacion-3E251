PROYECTO := primo
SRC := src
INCLUDE := include
BIN := bin
EXE := $(BIN)/$(PROYECTO)
LIB := -lftxui-component -lftxui-dom -lftxui-screen
CXXFLAGS := -std=c++17 -I$(INCLUDE)

SRC_FILES := $(SRC)/memoria.cpp

# Compilar
build: $(EXE)

$(EXE): $(SRC_FILES)
	mkdir -p $(BIN)
	c++ $(SRC_FILES) -o $(EXE) $(LIB) $(CXXFLAGS)

# Ejecutar
run: build
	./$(EXE)

# Limpiar
clean:
	rm -f $(BIN)/*