# Object files
ofiles = TestingMain.o LegionFactory.o RiverbankFactory.o WoodlandFactory.o \
         OpenFieldFactory.o LegionUnit.o RiverbankUnits.o WoodlandUnits.o \
         OpenFieldUnits.o TacticalCommand.o BattleStrategy.o FlankingStrategy.o \
         FortificationStrategy.o AmbushStrategy.o TacticalPlanner.o TacticalMemento.o \
         WarArchives.o UnitComponent.o Legion.o Infantry.o Cavalry.o Artillery.o

# Compiler options
gpp_o = g++ -c

# Main target
main: $(ofiles)
	g++ $(ofiles) -o Main

# Object file dependencies
TestingMain.o: TestingMain.cpp LegionFactory.h RiverbankFactory.h WoodlandFactory.h \
        OpenFieldFactory.h LegionUnit.h TacticalCommand.h BattleStrategy.h \
        TacticalPlanner.h TacticalMemento.h WarArchives.h UnitComponent.h \
        Legion.h Infantry.h Cavalry.h Artillery.h
	$(gpp_o) TestingMain.cpp

LegionFactory.o: LegionFactory.cpp LegionFactory.h LegionUnit.h
	$(gpp_o) LegionFactory.cpp

RiverbankFactory.o: RiverbankFactory.cpp RiverbankFactory.h LegionFactory.h RiverbankUnits.h
	$(gpp_o) RiverbankFactory.cpp

WoodlandFactory.o: WoodlandFactory.cpp WoodlandFactory.h LegionFactory.h WoodlandUnits.h
	$(gpp_o) WoodlandFactory.cpp

OpenFieldFactory.o: OpenFieldFactory.cpp OpenFieldFactory.h LegionFactory.h OpenFieldUnits.h
	$(gpp_o) OpenFieldFactory.cpp

LegionUnit.o: LegionUnit.cpp LegionUnit.h
	$(gpp_o) LegionUnit.cpp

RiverbankUnits.o: RiverbankUnits.cpp RiverbankUnits.h LegionUnit.h
	$(gpp_o) RiverbankUnits.cpp

WoodlandUnits.o: WoodlandUnits.cpp WoodlandUnits.h LegionUnit.h
	$(gpp_o) WoodlandUnits.cpp

OpenFieldUnits.o: OpenFieldUnits.cpp OpenFieldUnits.h LegionUnit.h
	$(gpp_o) OpenFieldUnits.cpp

TacticalCommand.o: TacticalCommand.cpp TacticalCommand.h BattleStrategy.h TacticalPlanner.h TacticalMemento.h
	$(gpp_o) TacticalCommand.cpp

BattleStrategy.o: BattleStrategy.cpp BattleStrategy.h
	$(gpp_o) BattleStrategy.cpp

FlankingStrategy.o: FlankingStrategy.cpp FlankingStrategy.h BattleStrategy.h
	$(gpp_o) FlankingStrategy.cpp

FortificationStrategy.o: FortificationStrategy.cpp FortificationStrategy.h BattleStrategy.h
	$(gpp_o) FortificationStrategy.cpp

AmbushStrategy.o: AmbushStrategy.cpp AmbushStrategy.h BattleStrategy.h
	$(gpp_o) AmbushStrategy.cpp

TacticalPlanner.o: TacticalPlanner.cpp TacticalPlanner.h TacticalMemento.h BattleStrategy.h
	$(gpp_o) TacticalPlanner.cpp

TacticalMemento.o: TacticalMemento.cpp TacticalMemento.h BattleStrategy.h
	$(gpp_o) TacticalMemento.cpp

WarArchives.o: WarArchives.cpp WarArchives.h TacticalMemento.h
	$(gpp_o) WarArchives.cpp

UnitComponent.o: UnitComponent.cpp UnitComponent.h
	$(gpp_o) UnitComponent.cpp

Legion.o: Legion.cpp Legion.h UnitComponent.h
	$(gpp_o) Legion.cpp

Infantry.o: Infantry.cpp Infantry.h UnitComponent.h
	$(gpp_o) Infantry.cpp

Cavalry.o: Cavalry.cpp Cavalry.h UnitComponent.h
	$(gpp_o) Cavalry.cpp

Artillery.o: Artillery.cpp Artillery.h UnitComponent.h
	$(gpp_o) Artillery.cpp

# Run the compiled program
run: Main
	./Main

# Clean up build artifacts
clean:
	rm -f *.o *.gcda *.gcno *.gcov *.gz *.json Main

# Memory check with Valgrind
valgrind:
	valgrind --leak-check=full -s ./Main

# Code coverage
coverage: clean
	g++ --coverage *.cpp -o Main
	./Main
	gcov -f -m -r -j Main-TacticalCommand Main-LegionFactory Main-TacticalPlanner
