#============================================================================#
#              AC2 & AD2 2017-2018 IEETA/DETI, UNIVERSITY OF AVEIRO          #
#============================================================================#
BIN    = .
CC     = gcc
CPLP   =
#-----------------------------------------------------------------------------
CFLAGS = -Wall -O3 -march=native -flto $(CPLP)
#-----------------------------------------------------------------------------
LIBS   = -lm
DEPS   = defs.h
PROGS  = $(BIN)/AC2 $(BIN)/AD2
OBJS   = mem.o msg.o buffer.o common.o hash.o array.o levels.o alphabet.o \
        arith.o arith_aux.o bitio.o pmodels.o tolerant.o context.o nn.o mix.o
#-----------------------------------------------------------------------------
all:
	$(MAKE) progs
progs: $(PROGS)
$(BIN)/AC2: ac2.c $(DEPS) $(OBJS)
	$(CC) $(CFLAGS) -o $(BIN)/AC2 ac2.c $(OBJS) $(LIBS)
$(BIN)/AD2: ad2.c $(DEPS) $(OBJS)
	$(CC) $(CFLAGS) -o $(BIN)/AD2 ad2.c $(OBJS) $(LIBS)
mem.o: mem.c mem.h $(DEPS)
	$(CC) -c $(CFLAGS) mem.c
msg.o: msg.c msg.h $(DEPS)
	$(CC) -c $(CFLAGS) msg.c
buffer.o: buffer.c buffer.h $(DEPS)
	$(CC) -c $(CFLAGS) buffer.c
common.o: common.c common.h $(DEPS)
	$(CC) -c $(CFLAGS) common.c
hash.o: hash.c hash.h $(DEPS)
	$(CC) -c $(CFLAGS) hash.c
array.o: array.c array.h $(DEPS)
	$(CC) -c $(CFLAGS) array.c
levels.o: levels.c levels.h $(DEPS)
	$(CC) -c $(CFLAGS) levels.c
alphabet.o: alphabet.c alphabet.h $(DEPS)
	$(CC) -c $(CFLAGS) alphabet.c
arith.o: arith.c arith.h $(DEPS)
	$(CC) -c $(CFLAGS) arith.c
arith_aux.o: arith_aux.c arith_aux.h $(DEPS)
	$(CC) -c $(CFLAGS) arith_aux.c
bitio.o: bitio.c bitio.h $(DEPS)
	$(CC) -c $(CFLAGS) bitio.c
pmodels.o: pmodels.c pmodels.h $(DEPS)
	$(CC) -c $(CFLAGS) pmodels.c
tolerant.o: tolerant.c tolerant.h $(DEPS)
	$(CC) -c $(CFLAGS) tolerant.c
context.o: context.c context.h $(DEPS)
	$(CC) -c $(CFLAGS) context.c
nn.o: nn.c nn.h
	$(CC) -c $(CFLAGS) nn.c
mix.o: mix.c mix.h $(DEPS)
	$(CC) -c $(CFLAGS) mix.c

clean:
	/bin/rm -f *.o
cleanall:
	/bin/rm -f *.o $(PROGS)
#-----------------------------------------------------------------------------
