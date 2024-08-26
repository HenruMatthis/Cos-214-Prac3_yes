cmake_minimum_required(VERSION 3.10)

# Project Name
project(RomanLegions)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Specify the executable and source files
add_executable(Main
        TestingMain.cpp
        LegionFactory.cpp
        RiverbankFactory.cpp
        WoodlandFactory.cpp
        OpenFieldFactory.cpp
        LegionUnit.cpp
        RiverbankUnits.cpp
        WoodlandUnits.cpp
        OpenFieldUnits.cpp
        TacticalCommand.cpp
        BattleStrategy.cpp
        FlankingStrategy.cpp
        FortificationStrategy.cpp
        AmbushStrategy.cpp
        TacticalPlanner.cpp
        TacticalMemento.cpp
        WarArchives.cpp
        UnitComponent.cpp
        Legion.cpp
        Infantry.cpp
        Cavalry.cpp
        Artillery.cpp
)


