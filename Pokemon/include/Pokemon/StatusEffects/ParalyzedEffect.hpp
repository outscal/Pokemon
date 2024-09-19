#pragma once
#include "IStatusEffect.hpp"

namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        class ParalyzedEffect : public IStatusEffect
        {
        private:
            int turnsLeft; // Track the remaining turns for the effect
        public:
            void applyEffect(Pokemon* target) override;
            std::string getEffectName() override;
            bool turnEndEffect(Pokemon* target) override;
            void clearEffect(Pokemon* target) override;
        };
    }
}
