#déclaration de variable

CC = $(CROSS_COMPILE)gcc
OBJ = max.o min.o var.o test.o
ifeq ($(DEBUG),yes)
	
	CC_OPTIONS= -g -Wall
else
	CC_OPTIONS=  
endif


install: My-binaire
	mv $^ /home/nadir

My-binaire:  ${OBJ}
	${CC} ${CC_OPTIONS} ${OBJ} -o $@
ifeq ($(DEBUG),yes)
	@echo "DEBUG MODE"
else
	@echo "RELEASE MODE"
endif
max.o : max.c
	${CC} ${CC_OPTIONS} -c $^ -o $@
min.o : min.c
	${CC} ${CC_OPTIONS} -c $^ -o $@
var.o : var.c
	${CC} ${CC_OPTIONS} -c $^ -o $@
test.o : test.c
	${CC} ${CC_OPTIONS} -c $^ -o $@

clean:  
	rm ${OBJ}

