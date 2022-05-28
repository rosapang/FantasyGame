CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -pedantic-errors

PROJ = fantasygame
BIN = fantasygame

OBJS = abyss.o arsenal.o axe.o boss.o character.o exit.o floor.o fountain.o game.o \
	   player.o shield.o space.o stair.o wall.o weapon.o main.o
SRCS = abyss.cpp arsenal.cpp axe.cpp boss.cpp character.cpp exit.cpp floor.cpp fountain.cpp \
	   game.cpp player.cpp shield.cpp space.cpp stair.cpp wall.cpp weapon.cpp main.cpp
HEADERS = abyss.hpp arsenal.hpp axe.hpp boss.hpp character.hpp exit.hpp floor.hpp fountain.hpp \
		  game.hpp player.hpp shield.hpp space.hpp stair.hpp wall.hpp weapon.hpp

main: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o ${PROJ}

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean: $(CLEAN)
	@echo "RM	*.o"
	@echo "RM	$(BIN)"
	@rm -f *.o $(BIN)
