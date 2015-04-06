all: PV FV PMT YTM

PV: PresentValue.o PV.o
	g++ ${CFLAGS} $^ -o $@

FV: FutureValue.o FV.o
	g++ ${CFLAGS} $^ -o $@

PMT: Payment.o PMT.o
	g++ ${CFLAGS} $^ -o $@

YTM: YieldToMaturity.o YTM.o
	g++ ${CFLAGS} $^ -o $@

%.o: %.cpp
	g++ ${CFLAGS} -std=c++11 $< -c -o $@

clean:
	rm -f *.o PV FV PMT YTM
