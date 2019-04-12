#pragma once
#include "../Value.h"

namespace BotAI
{
    class LastSpellCastTimeValue : public ManualSetValue<time_t>, public Qualified
	{
	public:
        LastSpellCastTimeValue(PlayerbotAI* ai) : ManualSetValue<time_t>(ai, 0), Qualified() {}
    };
}
