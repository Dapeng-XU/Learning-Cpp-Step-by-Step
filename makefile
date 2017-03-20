CXX = g++
CXXFLAGS = -O0 -g

.PHONY: all clean

all: cancellation-in-floating-points
	@echo 
	@echo .
	@echo Finished!

cancellation-in-floating-points: cancellation-in-floating-points/main.o
	$(CXX) $(CXXFLAGS) -o cancellation-in-floating-points/main.exe $<
	@echo ok.

proj2:
	@echo proj2

clean: 
	@echo clean
	