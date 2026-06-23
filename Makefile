EE_BIN = GAME.ELF
EE_OBJS = main.o
EE_LIBS = -lgskit -ldmakit -lgraph -ldma

all: $(EE_BIN)

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal
