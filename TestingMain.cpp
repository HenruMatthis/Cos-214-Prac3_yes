#include <iostream>
#include <memory>

// Factory Pattern Headers
#include "LegionFactory.h"
#include "RiverbankFactory.h"
#include "WoodlandFactory.h"
#include "OpenFieldFactory.h"

// Unit Headers
#include "LegionUnit.h"
#include "RiverbankUnits.h"
#include "WoodlandUnits.h"
#include "OpenFieldUnits.h"

// Strategy Pattern Headers
#include "BattleStrategy.h"
#include "FlankingStrategy.h"
#include "FortificationStrategy.h"
#include "AmbushStrategy.h"

// Command Pattern Headers
#include "TacticalCommand.h"

// Memento Pattern Headers
#include "TacticalPlanner.h"
#include "TacticalMemento.h"
#include "WarArchives.h"

// Composite Pattern Headers
#include "UnitComponent.h"
#include "Legion.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

int main() {
    std::cout << "=== Roman Legions Battle Simulation ===\n\n";

    // Creating Factories for Different Terrains
    std::unique_ptr<LegionFactory> riverbankFactory = std::make_unique<RiverbankFactory>();
    std::unique_ptr<LegionFactory> woodlandFactory = std::make_unique<WoodlandFactory>();
    std::unique_ptr<LegionFactory> openFieldFactory = std::make_unique<OpenFieldFactory>();

    // Creating Units using Riverbank Factory
    std::unique_ptr<LegionUnit> riverInfantry = std::unique_ptr<LegionUnit>(riverbankFactory->createInfantry());
    std::unique_ptr<LegionUnit> riverCavalry = std::unique_ptr<LegionUnit>(riverbankFactory->createCavalry());
    std::unique_ptr<LegionUnit> riverArtillery = std::unique_ptr<LegionUnit>(riverbankFactory->createArtillery());

    // Deploying Artillery in Riverbank Terrain
    std::cout << "[Riverbank] Deploying Artillery:\n";
    riverbankFactory->deployArtillery();
    riverArtillery->attack();
    std::cout << "\n";

    // Creating Units using Woodland Factory
    std::unique_ptr<LegionUnit> woodInfantry = std::unique_ptr<LegionUnit>(woodlandFactory->createInfantry());
    std::unique_ptr<LegionUnit> woodCavalry = std::unique_ptr<LegionUnit>(woodlandFactory->createCavalry());
    std::unique_ptr<LegionUnit> woodArtillery = std::unique_ptr<LegionUnit>(woodlandFactory->createArtillery());

    // Deploying Artillery in Woodland Terrain
    std::cout << "[Woodland] Deploying Artillery:\n";
    woodlandFactory->deployArtillery();
    woodArtillery->attack();
    std::cout << "\n";

    // Creating Units using Open Field Factory
    std::unique_ptr<LegionUnit> fieldInfantry = std::unique_ptr<LegionUnit>(openFieldFactory->createInfantry());
    std::unique_ptr<LegionUnit> fieldCavalry = std::unique_ptr<LegionUnit>(openFieldFactory->createCavalry());
    std::unique_ptr<LegionUnit> fieldArtillery = std::unique_ptr<LegionUnit>(openFieldFactory->createArtillery());

    // Deploying Artillery in Open Field Terrain
    std::cout << "[Open Field] Deploying Artillery:\n";
    openFieldFactory->deployArtillery();
    fieldArtillery->attack();
    std::cout << "\n";

    // Creating Battle Strategies
    std::unique_ptr<BattleStrategy> flankingStrategy = std::make_unique<FlankingStrategy>();
    std::unique_ptr<BattleStrategy> fortificationStrategy = std::make_unique<FortificationStrategy>();
    std::unique_ptr<BattleStrategy> ambushStrategy = std::make_unique<AmbushStrategy>();

    // Setting up Tactical Planner and Command
    TacticalPlanner planner;
    TacticalCommand command;

    // Planning and Executing Flanking Strategy
    planner.setStrategy(flankingStrategy.get());
    command.setStrategy(planner.getStrategy());
    std::cout << "Executing Flanking Strategy:\n";
    command.executeStrategy();
    auto flankingMemento = planner.save();
    std::cout << "\n";

    // Planning and Executing Fortification Strategy
    planner.setStrategy(fortificationStrategy.get());
    command.setStrategy(planner.getStrategy());
    std::cout << "Executing Fortification Strategy:\n";
    command.executeStrategy();
    auto fortificationMemento = planner.save();
    std::cout << "\n";

    // Planning and Executing Ambush Strategy
    planner.setStrategy(ambushStrategy.get());
    command.setStrategy(planner.getStrategy());
    std::cout << "Executing Ambush Strategy:\n";
    command.executeStrategy();
    auto ambushMemento = planner.save();
    std::cout << "\n";

    // Restoring Previous Strategy from Memento
    planner.restore(flankingMemento.get());
    command.setStrategy(planner.getStrategy());
    std::cout << "Restored and Re-Executing Flanking Strategy:\n";
    command.executeStrategy();
    std::cout << "\n";

    // Archiving Strategies
    WarArchives archives;
    archives.addMemento("Flanking", std::move(flankingMemento));
    archives.addMemento("Fortification", std::move(fortificationMemento));
    archives.addMemento("Ambush", std::move(ambushMemento));

    // Retrieving and Executing Archived Strategy
    auto retrievedMemento = archives.getMemento("Ambush");
    if (retrievedMemento) {
        planner.restore(retrievedMemento.get());
        command.setStrategy(planner.getStrategy());
        std::cout << "Retrieved and Executing Archived Ambush Strategy:\n";
        command.executeStrategy();
        std::cout << "\n";
    }

    // Building a Legion using Composite Pattern
    std::shared_ptr<UnitComponent> legion = std::make_shared<Legion>("1st Legion");

    std::shared_ptr<UnitComponent> infantryUnit = std::make_shared<Infantry>("Infantry Squad 1", 100);
    std::shared_ptr<UnitComponent> cavalryUnit = std::make_shared<Cavalry>("Cavalry Squad 1", 50);
    std::shared_ptr<UnitComponent> artilleryUnit = std::make_shared<Artillery>("Artillery Squad 1", 10);

    legion->add(infantryUnit);
    legion->add(cavalryUnit);
    legion->add(artilleryUnit);

    std::cout << "Legion Composition and Attack:\n";
    legion->displayInfo();
    legion->attack();
    std::cout << "\n";

    std::cout << "=== Simulation Complete ===\n";
    return 0;
}
