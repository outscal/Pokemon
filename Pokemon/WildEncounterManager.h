#include <vector>
class Grass;

class WildEncounterManager {
public:
    WildEncounterManager();
    Pokemon getRandomPokemonFromGrass(const Grass& grass);
};