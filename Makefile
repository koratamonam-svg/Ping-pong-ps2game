EE_BIN = GAME.ELF
EE_OBJS = main.o

all: $(EE_BIN)

$(EE_BIN): $(EE_OBJS)
	$(CC) -o $@ $(EE_OBJS)

clean:
	rm -f $(EE_BIN) $(EE_OBJS)
