EE_BIN = GAME.ELF
EE_OBJS = main.o
EE_LIBS = -lgskit -ldmakit

# هذه المتغيرات ضرورية لكي يجد المترجم الملفات
export PS2SDK = /usr/local/ps2dev/ps2sdk
include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal

all: $(EE_BIN)
