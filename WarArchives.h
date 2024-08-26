//Caretaker
#ifndef PRAC_3_WARARCHIVES_H
#define PRAC_3_WARARCHIVES_H

#include <map>
#include <string>
#include "TacticalMemento.h"

class WarArchives {
private:
    std::map<std::string, TacticalMemento*> archives;

public:
    void addTacticalMemento(TacticalMemento* memento, const std::string& label) {
        archives[label] = memento;
    }

    void removeTacticalMemento(const std::string& label) {
        archives.erase(label);
    }

    TacticalMemento* getMemento(const std::string& label) {
        return archives[label];
    }

    ~WarArchives() {
        for (auto& pair : archives) {
            delete pair.second;
        }
    }
};

#endif
