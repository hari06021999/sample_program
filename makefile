ARMGNU = aarch64-elf
OPT_LEVEL ?= 0
DEBUG_FLAGS = -g
CFLAGS = $(DEBUG_FLAGS) -O $(OPT_LEVEL)
ASFLAGS = $(DEBUG_FLAGS)
INC = -I ../

all : imx8m.bin

start.o : start.S
	$(ARMGNU)-as start.S $(ASFLAGS) -o start.o

main.o : main.c
	$(ARMGNU)-gcc -g -O0 -lunistd -I . -c $< -o $@

output.elf:start.o main.o
	$(ARMGNU)-ld start.o main.o  -T linkerfile.ld -Map disassembly.map -o output.elf
	
imx8m.bin: output.elf
	$(ARMGNU)-objcopy -O binary $< $@

clean:
	rm -f *.o *.elf *.img *.map *.list *.symbol